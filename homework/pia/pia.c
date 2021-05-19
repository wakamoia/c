#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

struct user{

	char name[20];
	int age;
	float weight;
	int issue;
}
user[20];		

int main(){

int op;
op = 2;
  while(op == 2)
     {
	    printf("\t      estas list@?\nyes = 1\t\t\t\tno = 2\n");
  	     scanf("%d",&op); 
	     system("cls");
 		 	break; }
  while(op == 2){
		 system("cls");
 
		printf("\t      ahora estas list@?\nyes = 1\t\t\t\tno = 2\n");
 	 	 scanf("%d",&op); 
		 system("cls");
	 }

	int cant;
	
	printf("hola soy ms. doki hoy te ayudare para saber si eres un@ persona infectada de covid\n");
	printf("introduce los datos que se te piden, edad, peso, enfermedades cronicas\n");
	
		printf("\npara ver el funcionamiento hay 10 usuarios\n");
		scanf("%i",&cant);
	
int i;

for(i=0; i<cant; i++)

{ fflush(stdin);
				printf("user[%d] ~ your name: ", i);
	  		gets(user[i].name);	
				printf("user[%i] ~ age: ", i);
			scanf("%i" ,&user[i].age); 
			int age;
		if(age>50)	{
		printf("mayor de edad, mas probable a contraer covid");
		}	
				printf("user[%i] ~ weight: ", i);
			scanf("%d ", &user[i].weight); 
			float weight;
		if(weight>=70)	{
		printf("sobrepeso, mas probable a contraer covid");
		}
		if(weight>=120)	{
		printf("obecidad, mas probable a contraer covid");
		}	
		printf("\ncuantas de estas tienes diabetes, obesidad, asma, edad adulta\n");		
				printf("user[%d] ~ issues:", i); 
				int issue;
				if(issue>=2)	{
		printf("factor de riesgo covid");
		}
				
			 printf("\nfinish");
}
	return 0;

}		



