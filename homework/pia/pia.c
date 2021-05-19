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
	    printf("  estas list@ para comenzar el test?\nyes = 1\t\t\t\tno = 2\n");
  	     scanf("%d",&op); 
	     system("cls");
 		 	break; }
  while(op == 2){ /*si la rescuesta es no entonces se le repite la pregunta hasta que este listo*/
		 system("cls");
 
		printf("\t   ahora estas list@?\nyes = 1\t\t\t\tno = 2\n");
 	 	 scanf("%d",&op); 
		 system("cls");
	 }

	int cant;
	
	printf("hola soy ms. doki hoy te ayudare para saber si eres un@ persona infectada de covid o si eres muy propens@ a contagiarte\n");
	printf("introduce los datos que se te piden, edad, peso, enfermedades cronicas\n");
	
		printf("\ninserte cuantos usuarios se realizaran el test\n");
		scanf("%i",&cant);
	
int i;

for(i=0; i<cant; i++)

{ fflush(stdin); /*AQUI SE RECAUDAN LOS DATOS DEL USUARIO*/
				printf("user[%d] ~ your name: ", i);
	  		gets(user[i].name);	
	int age;
			printf("user[%i] ~ age: ", i); /*SI EL USUARIO ESTA EN UN RANGO DE EDAD ELEVADO O MUY RIESGOSO, SE LE INFORMARA */
			scanf("%i" ,&user[i].age); 
	if(age > 40)	{
		puts("poblacion de mayor riesgo, mantenerse alerta!!");
	}
	float weight;
		printf("user[%i] ~ weight: ", i); /*SI EL USUARIO TIENE OBESIDAD O SOBRE PESO SE LE INFORMARA YA QUE ES UN FACTOR PARA CONTAGIO COVID*/
			scanf("%f", &user[i].weight); 
	if(weight > 85 ){
		puts("sobrepeso/obesidad, propenso a covid");
	}	
			int issue, count=1, n, m;
		printf("\ncuantas de estas enfermedades tiene ud? indiquelo con numeros. ejemplo: 1234 o solo <1> en caso de no padecerlas\n->(2)diabetes,(3) obesidad, (4)asma, (5)edad adulta<-\n");		
				printf("user[%d] ~ issues:", i); /*LAS ENFERMEDADES CRONICAS SON UN FACTOR MUY IMPORTANTE DE CONTAGIO COVID, ASI QUE ES IMPORTANTE TENER ESTOS DATOS*/
				scanf("\n%d", &issue);
			while(issue >4)
			{
				m= issue/5;
				
				n= issue %5;
			
			count = count +1;
			
			issue =m;
			}
			 printf("\n%d enfermedad(es)\n", count);
			 
		int covis, cont=1, a, b;	
			
		printf("\n cuantos de estos sintomas presentas?");/*SE ENTISTAN SITNOMAS Y SE LE PIDE AL USUARIO QUE ESPECIFIQUE DE CUALES PADECE, DESPUES ESTOS SE CUENTAN*/
		
		printf("\n1-Fiebre o escalofrios");
		printf("\n2-Congestion nasal/Tos");
		printf("\n3-Dificultad para respirar  osea  sentir que le falta el aire");
		printf("\n4-Fatiga");
		printf("\n5-Dolores musculares y corporales");
		printf("\n6-Dolor de cabeza");
		printf("\n7-Perdida reciente del olfato o el gusto");
		printf("\n8-Dolor de garganta");
		printf("\n9- vomitos/ diarrea");
		
		scanf("\n%d ", &covis);
			
			while(covis >9)
			{
				b= issue/10;
				
				a= issue %10;
			
			cont = count +1;
			
			covis =b;
			}
			 printf("\n%d enfermedad(es)", cont);}
		int puntos;
		printf("introduzca cuantos sintomas y enfermedades obtuvo al final, ejemplo: 6+9= 15 puntos\n");
		scanf("%f",&puntos);
		
		if(puntos>9){
			puts("lamento informarte que lo mas probable es que tengas covid:c\n\n \\\\\\\\COVID POSSITIVE//////");
		}	 
			else{
				puts("FELICIDADES NO TIENES COVID! o bueno, eso parece...\n\n \\\\\\\\COVID NEGATIVE//////");
			} 

	return 0;

	
}
