#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

struct user{

	char name[20];
	int age;
	float weight;
	int issue;
	int covis;
}
user[20];		

int main(){

int op = 2;
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
	
		printf("user[%i] ~ weight: ", i);
			scanf("%f", &user[i].weight); 
			
			int issue, count=1, n, m;
		printf("\ncuantas de estas tienes diabetes, obesidad, asma, edad adulta\n");		
				printf("user[%d] ~ issues:", i); 
				
				scanf("\n%d", &issue);
			
			while(issue >9)
			{
				m= issue/10;
				
				n= issue %10;
			
			count = count +1;
			
			issue =m;
			}
			 printf("\n%d", count);
			 
		int covis, cont=1, a, b;	
			
		printf("\n sintomas covid cuantos de estos tienes?");
		
		printf("\n1-Fiebre o escalofrios");
		printf("\n2-Congestión/Tos");
		printf("\n3-Dificultad para respirar  osea  sentir que le falta el aire");
		printf("\n4-Fatiga");
		printf("\n5-Dolores musculares y corporales");
		printf("\n6-Dolor de cabeza");
		printf("\n7-Perdida reciente del olfato o el gusto");
		printf("\n8-Dolor de garganta");
		printf("\n9- vómitos/ diarrea");
		
		scanf("\n%d", &covis);
			
			while(covis >9)
			{
				b= covis/10;
				
				a= covis %10;
			
			cont = cont +1;
			
			covis =b;
			}
			 printf("\n%d", cont);
}
	return 0;

	
}
