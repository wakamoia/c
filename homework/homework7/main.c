/*para copilar primero pones el .c y el .h, después crear 5 sin texto pq ahí es donde verán los movimientos
   go.txt, enter.txt, horario.txt, check.txt, exit.txt
   
   al dejar de copilar ya puedes ver los movimientos en los doc en blanco .txt
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "matrix.h"

int main()
{
    header();
    int a;
    int b;
    int temporalpin;
    matrix = (int*)malloc(sizeof(int) * USUARIOS);
    for (a = 0; a < USUARIOS; a ++){
            matrix[a] = (int*)malloc(sizeof(int) * 6);
            for (b=0; b<6; b++){
            matrix[a][b]=-1;
            }
    }
    int exit=0;
    int option=0;
    while(exit==0){
        int limit;
        limit=count();
        printf("\n so we've %d registered workers\n", limit);
        printf("FIRST YOU HAVE TO USE OPTION 3: REGISTER A WORKER, then you can do the rest*");
        printf("\nType\n1 To register an entery \n2 To register an exit\n3 To register a worker\n4 To finish\n");
        scanf("%d", &option);
        if (option==1){ 
        printf("Please, enter your pin\n");
        scanf("%d", &temporalpin);
        
        if (temporalpin<=0){
            printf("Type a valid entry\n");
        }
             else if (temporalpin<=limit){
                if (matrix[temporalpin-1][1]==-1){ 
                    hiorbye(temporalpin, 0);
                }
                else{
                    printf("you have already registered your entry\n");
                }
            }
            else{
                printf("There are %d workers. Invalid pin\n", limit);
            }
        }
        else if (option==2){   
        printf("Please, type your pin\n");
        scanf("%d", &temporalpin);
        
        if (temporalpin<=0){
            printf("Invalid entry\n");
        }
             else if (temporalpin<=limit){
                if (matrix[temporalpin-1][1]!=-1){ 
                    hiorbye(temporalpin, 1);
                }
                else{
                    printf("Please, type an entry to register an exit\n");
                }
            }
            else{
                printf("There are %d workers. Invalid pin\n", limit);
            }
        }
        else if (option==3){
            registered();
        }
        else if (option==4){
            int flag=0;
            for (a=0; a<MAX; a++){
                if(matrix[a][0]*matrix[a][1]*matrix[a][2]>0&&matrix[a][3]*matrix[a][4]*matrix[a][5]<0){
                    flag=-1; 
                    printf("Error: User <%d> did not register an exit\n\n", i+1);
                }
            }
            if (flag==0){
            horario();
            printf("bye bestieee have a nice day<333\n");
            exit=1;
            }
        }
        else{
            printf("option not available\n\n");
        }
    }

    return 0;
}

int count(){
    FILE* go = fopen("go.txt", "r");
    char c;
    int count=0;
    while ((c = fgetc(go)) != EOF) {
    if (c == '\n') {
      count++; 
    }
    }
    
    return count;
}

void registered(){
    int pin;
    pin=count()+1;
    char user[MAX];
    int sunday;
    int monday;
    int tuesday;
    int wednesday;
    int thursday;
    int friday;
    int saturday;
    int hour;
    int min;
    int work;
    printf("New pin: <%d>\n", pin);
    registrados++;
    printf("Type an username\n");
    scanf("%s", user);
    
     do{
        printf("\nType 0 (False) and 1 (True) for the days that the worker will work\nFor example: 0 1 1 0 1 1 0\nThere must be at least one 1\n");
        printf("you have to write 7 numbers\n");
        printf("Sun Mon Tue Wed Thu Fri Sat\n");
        scanf("%d %d %d %d %d %d %d", &sunday, &monday, &tuesday, &wednesday, &thursday, &friday, &saturday);
    } while(sunday+monday+tuesday+wednesday+thursday+friday+saturday==0||sunday!=0&&sunday!=1||monday!=0&&monday!=1||tuesday!=0&&tuesday!=1||wednesday!=0&&wednesday!=1||thursday!=0&&thursday!=1||friday!=0&&friday!=1||saturday!=0&&saturday!=1);
    
    do {
        printf("\nEnter hour and minute to work (Use an space)\n");
        printf("like: 15 25\n");
        scanf("%d %d", &hora, &min);
    } while(hora<0||hora>23||min<0||min>60);
        
    do {
        printf("\nType how many seconds will you work? (numbers between 1 to 60)\n");
        scanf("%d", &work);
    }while(work<=0||work>60);
    printf("good job!!\n\n");
    
    FILE* writego = fopen("go.txt", "a");
    fprintf(writego, "%d %s %d %d %d %d %d %d %d %d %d %d\n",pin, user, sunday, monday, tuesday, wednesday, thursday, friday, saturday, hour, min, work);
    fclose(writego;
}

void hiorbye(int pin, int estate){
    int diferencia=0; 
    time_t tiempoahora;
    time(&tiempoahora);
    struct tm *mitiempo = localtime(&tiempoahora);
    int actualsec=mitiempo->tm_sec;
    int actualmin=mitiempo->tm_min;
    int actualhora=mitiempo->tm_hour;
    int actualyear=mitiempo->tm_year+1900;
    int actualmes=mitiempo->tm_mon+1;
    int actualdia=mitiempo->tm_mday;
    int actualwdia=mitiempo->tm_wday;
    if (estate==0){ 
    FILE* entrada = fopen("entradas.txt", "a");
    fprintf(entrada, "%d %d %d/%d/%d %d:%d:%d\n", pin, actualwdia, actualdia, actualmes, actualyear, actualhora, actualmin, actualsec);
    fclose(entrada);
    matrix[pin-1][0]=actualhora;
    matrix[pin-1][1]=actualmin;
    matrix[pin-1][2]=actualsec;
    printf("Entry registered succesfully\n");
    }
    if (estate==1){
    FILE* salida = fopen("salidas.txt", "a"); 
    fprintf(salida, "%d %d %d/%d/%d %d:%d:%d\n", pin, actualwdia, actualdia, actualmes, actualyear, actualhora, actualmin, actualsec);
    fclose(salida);
    printf("Exit registered succesfully\n");
    matrix[pin-1][3]=actualhora;
    matrix[pin-1][4]=actualmin;
    matrix[pin-1][5]=actualsec;
    FILE* reporte = fopen("reporte.txt", "a");
    if (totaldesalidas==0){
        fprintf(reporte, "data generated the day: "); 
            switch(actualwdia){
                case 0:
                fprintf(reporte, "Sunday");
                break;
                case 1:
                fprintf(reporte, "Monday");
                break;
                case 2:
                fprintf(reporte, "Tuesday");
                break;
                case 3:
                fprintf(reporte, "Wednesday");
                break;
                case 4:
                fprintf(reporte, "Thursday");
                break;
                case 5:
                fprintf(reporte, "Friday");
                break;
                case 6:
                fprintf (reporte, "Saturday");
                break;
            }
        fprintf(reporte, " %d/%d/%d\n", actualdia, actualmes, actualyear);
    } 
    
    diferencia=(matrix[pin-1][3]*3600+matrix[pin-1][4]*60+matrix[pin-1][5])-(matrix[pin-1][0]*3600+matrix[pin-1][1]*60+matrix[pin-1][2]);
    int horapin=matrix[pin-1][0];
    int minpin=matrix[pin-1][1];
    int segundopin=matrix[pin-1][2];                                                                            
    fprintf(reporte, "Employee <%d> entered: <%d:%d:%d> the day: <%d/%d/%d> and worked %d seconds\n", pin, horapin, minpin, segundopin, actualdia, actualmes, actualyear, diferencia);
    fclose(reporte);
    matrix[pin-1][0]=-1;
    matrix[pin-1][1]=-1;
    matrix[pin-1][2]=-1;
    matrix[pin-1][3]=-1;
    matrix[pin-1][4]=-1;
    matrix[pin-1][5]=-1;
    
    totaldesalidas=9; 
    }
}
void header(){
    printf("Record of working hours\n");
    time_t tiempoahora;
    time(&tiempoahora);
    struct tm *mitiempo = localtime(&tiempoahora);
    switch(mitiempo->tm_wday){
        case 0:
        printf("Today is Sunday\n");
        break;
        case 1:
        printf("Today is Monday\n");
        break;
        case 2:
        printf("Today is Tuesday\n");
        break;
        case 3:
        printf("Today is Wednesday\n");
        break;
        case 4:
        printf("Today is Thursday\n");
        break;
        case 5:
        printf("Today is Friday\n");
        break;
        case 6:
        printf ("Today is Saturday\n");
        break;
    }
    printf("Day: %d/%d/%d\n", mitiempo->tm_mday, mitiempo->tm_mon+1, mitiempo->tm_year+1900); 
    printf("Hour: %d:%d\n", mitiempo->tm_hour, mitiempo->tm_min);
    printf("You can only enter %d in this system\n", USUARIOS);
}

void horario(){
    time_t tiempoahora;
    time(&tiempoahora);
    int pinleido;
    char usuarioleido[MAX];
    int sundayhorario;
    int mondayhorario;
    int tuesdayhorario;
    int wednesdayhorario;
    int thursdayhorario;
    int fridayhorario;
    int saturdayhorario;
    int horaleida;
    int minutoleido;
    int trabajo;
    int a;
    struct tm *mitiempo = localtime(&tiempoahora);
    FILE* readgo = fopen("go.txt", "r");
    FILE* writehorario = fopen("horario.txt", "w");
    char c;
    int count;
    while (fscanf(readgo, "%d %s %d %d %d %d %d %d %d %d %d %d\n", &pinleido, usuarioleido, &sundayhorario, &mondayhorario, &tuesdayhorario, &wednesdayhorario, &thursdayhorario, &fridayhorario, &saturdayhorario, &horaleida, &minutoleido, &trabajo) == 12) {
    fprintf(writehorario, "User <%s> with the pin <%d>, must enter at: %d:%d, must work for <%d seconds> the days:\n", usuarioleido, pinleido,horaleida, minutoleido, trabajo);
    if (sundayhorario==1)
    fprintf(writehorario, "Sunday ");
    if (mondayhorario==1)
    fprintf(writehorario, "Monday ");
    if (tuesdayhorario==1)
    fprintf(writehorario, "Tuesday ");
    if (wednesdayhorario==1)
    fprintf(writehorario, "Wednesday ");
    if (thursdayhorario==1)
    fprintf(writehorario, "Thursday ");
    if (fridayhorario==1)
    fprintf(writehorario, "Friday ");
    if (saturdayhorario==1)
    fprintf(writehorario, "Saturday ");
    
    fprintf(writehorario, "\n\n");    
    }
    
    
    fclose(readgo);
    fclose(writehorario);
}
/* based on ÁNGEL RAÚL CHAVEZ CARRILLO.*/
