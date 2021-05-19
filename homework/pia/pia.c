/*
	Name: Mr. Doki covid-test
	Author: Patricia Sofia Moya Tobias
	Date: 19/05/21 02:31
	Description: this program can help you yo know if waybe you have covid, un comodo test que puedes usar sin salir de tu casa and with this you could go to the doctor and take care of your condition
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

struct user{ /* HERE IS A STRUCTURE FOR ALL THE USERS THAT WOULD USE THIS TEST*/

	char name[20];
	int age;
	float weight;
	int issue;
	int covis;
}
user[20];		

int main(){

int op = 2;
  while(op == 2) /* AQUI SE LE PREGUNTA AL USUARIO SI ESTA LISTO PARA COMENZAR CON EL TEST*/
     {
	    printf(" are you ready to start the test?\nyes = 1\t\t\t\tno = 2\n");
  	     scanf("%d",&op); 
	     system("cls");
 		 	break; }
  while(op == 2){ /*si la rescuesta es no entonces se le repite la pregunta hasta que este listo*/
		 system("cls");
 
		printf("\t       Are you now?\nyes = 1\t\t\t\tno = 2\n");
 	 	 scanf("%d",&op); 
		 system("cls");
	 }

	int cant;
	
	printf("hello there I'm ms. doki and today im gonna help you to find out if you are a covid infected or if you just have a flu:D\n");
	printf("enter the data you are asked for such as age, weight, chronic diseases; these data are important for the final beedict\n");
	
		printf("\ninsert how many users will take the test\n");
		scanf("%i",&cant);
	system("cls");
int i;

for(i=0; i<cant; i++)

{ fflush(stdin); /*AQUI SE RECAUDAN LOS DATOS DEL USUARIO*/
				printf("user[%d] ~ your name: ", i);
	  		gets(user[i].name);	

			printf("user[%i]  age: ", i); /*SI EL USUARIO ESTA EN UN RANGO DE EDAD ELEVADO O MUY RIESGOSO, SE LE INFORMARA */
			scanf("%i" ,&user[i].age); 
				int age = user[i].age;
	if((age > 21) && (age < 50) ){
		puts("!!!are the most infected");
	}	
	if(age > 51 )	{
		puts("population at greatest risk, stay alert!!");
	}
	
		printf("user[%i]  weight: ", i); /*SI EL USUARIO TIENE OBESIDAD O SOBRE PESO SE LE INFORMARA YA QUE ES UN FACTOR PARA CONTAGIO COVID*/
			scanf("%f", &user[i].weight);
			 float weight= user[i].weight;
	if(weight > 85 ){
		puts("overweight/obesity, prone to covid");
	}	
	if(weight > 110)	{
		puts("obesity, very prone to covid");
	}
			int issue, count=1, n, m;
		printf("\nhow many of these diseases do you have?\nindicate it with numbers. example: 1234 or only <1> if you do not develop them \n>(2)diabetes,(3) obesity, (4)asthma, (5)adulthood<-\n");		
				printf("user[%d] ~ issues:", i); /*LAS ENFERMEDADES CRONICAS SON UN FACTOR MUY IMPORTANTE DE CONTAGIO COVID, ASI QUE ES IMPORTANTE TENER ESTOS DATOS*/
				scanf("\n%d", &issue);
			while(issue >4)
			{
				m= issue/5;
				
				n= issue %5;
			
			count = count +1;
			
			issue =m;
			}
			 printf("\n%d diseases\n", count);
			 
		int covis, cont=1, a, b;	
			
		printf("\n how many of these symptoms do you present?");/*SE ENTISTAN SITNOMAS Y SE LE PIDE AL USUARIO QUE ESPECIFIQUE DE CUALES PADECE, DESPUES ESTOS SE CUENTAN*/
		
		printf("\n1-Fever or chills");
		printf("\n2-Nasal congestion or cough");
		printf("\n3-Difficulty breathing, like you're short of breath");
		printf("\n4-Fatigue");
		printf("\n5-Muscle and body aches");
		printf("\n6-Headache");
		printf("\n7-Recent loss of smell or taste");
		printf("\n8-Sore throat");
		printf("\n9- Vomiting or diarrhea\n");
		
		scanf("\n%I", &covis);
			
			while(covis >9)
			{
				b= covis/10;
				
				a= covis %10;
			
			cont = cont +1;
			
			covis =b;
			}
			 printf("\n%i covid syntoms\n", cont);
		}	
		
		printf("\nenter how many symptoms and diseases you got at the end, for example: 6+9 = 15 points ->");
		int puntos;
		scanf("%i",&puntos); 
		for(i=0; i<user; i++){
		
		if(puntos>=9){
		printf("user[%i]~ %s according to my calculations and thanks to the data entered, you have covid, you should go to a doctor\n\n \\\\\\\\COVID POSSITIVE//////",i , user[i].name);
		}
		else{
				printf("CONGRATULATIONS USER[%i]- %s YOU DO NOT HAVE COVID! or well, that seems...\n\n \\\\\\\\COVID NEGATIVE//////",i , user[i].name);
			} break;
}
	return 0;
}
