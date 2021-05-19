/*warning!!! for some reason the program can't run on online C copiler correctly, please use another website to run it.
	Description: this program can help you yo know if waybe you have covid, a well-wearing test that you can use withoutleaving your home and with this you could go to the doctor and take care of your condition
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

struct user{ /* HERE IS A STRUCTURE FOR ALL THE USERS THAT COULD USE THIS TEST*/

	char name[20];
	int age;
	float weight;
	int issue;
	int covis;
	float height;
}
user[20];		

int main(){
	
int op = 2;
  while(op == 2) /* HERE THE USER IS ASKED IF THEY ARE READY TO START WITH THE TEST*/
     {
	    printf(" are you ready to start the test?\nyes = 1\t\t\t\tno = 2\n");
  	     scanf("%d",&op); 
	     system("cls");
 		 	break; }
  while(op == 2){ /*IF THE ANSWER IS NOT THEN THE QUESTON IS REPEATED UNTIL YOU ARE READY*/
		 system("cls");
 
		printf("\t       Are you now?\nyes = 1\t\t\t\tno = 2\n");
 	 	 scanf("%d",&op); 
		 system("cls");
	 }
	int cant,qcaso=1;
	
	while(qcaso== 1)
	{printf("...");
		system("cls");
	  printf("hello there! my name is Ms. Doki and today im gonna help you to find out if you are a covid infected or if you just have a flu:D!\n");
	printf("enter the data you are asked for such as age, weight, chronic diseases, these data are important for the final beedict\n");

		printf("\ninsert how many users will take the test\n");
		scanf("%i",&cant);
	system("cls");
int i;

for(i=0; i<cant; i++)

{ fflush(stdin); /*HERE THE USER'S DATA IS COLLECTED*/
				printf("user[%d] ~ your name: ", i);
	  		gets(user[i].name);	

			printf("user[%i]  age: ", i); /*IF THE USER IS IN A HIGH OR VERY RISKY AGE RANGE, THEY WILL BE INFORMED*/
			scanf("%i" ,&user[i].age); 
				int age = user[i].age;
	if(age > 21&&age < 50){
		puts("!!!ARE THE MOST INFECTED");
	}	
	if(age > 51 )	{
		puts("POPULATION ATE GREATEST RISCK,STAY ALERT!!");
	}
	
	float h= user[i].height, w= user[i].weight, imc;	
	printf("user[%i]  height: ", i);/*IF THE USER DOES NOT KNOW HOW TO GET THIS BMIES OUT THEN THEY CAN DO IT HERE*/
			scanf("%f", &h);
	printf("user[%i]  weight: ", i); 
			scanf("%f", &w);
	 imc=(w/(h*h));	
	printf("\t\t\t imc: %.1f", imc);	

	if( imc<18.5){/*IF THE USER IS  LOW WEIGHT, OBESE OR OVERWEIGHT, THEY WILL BE INFORMED AS IT IS A FACTOR FOR COVID CONTAGION*/
		printf("\nlow weight\n");
	}
		if(imc>=25&&imc<30)	{
		printf("\noverweight, prone to covid\n");
		}
		if(imc>30)	{
		printf("\nobesity, very prone to covid\n");
		}		
			int issue, count=1, n, m;
		printf("\n\nhow many of these diseases do you have?\nindicate it with numbers. example: 1234 or only <1> if you do not develop them \n>(2)diabetes,(3) obesity, (4)asthma, (5)adulthood<-\n");		
				printf("user[%d] ~ issues:", i); /*CHRONIC DISEASES ARE A VERY IMPORTANT FACTOR IN COVID CONTAGION, SO IT'S IMPORTANT TO HAVE THESE DATA*/
				scanf("\n%d", &issue);
			while(issue >5)
			{
				m= issue/6;
				
				n= issue %6;
			
			count = count +1;
			
			issue =m;
			}
			 printf("\n%d diseases\n", count);
			 
		int covis, cont=1, a, b;	
			
		printf("\n how many of these symptoms do you present?\n");/*COVID SYMPTOMS ARE LISTED AND THE USER IS ASKED TO SPECIFY WHICH ONE THEY SUFFER FROM, THEN THEY ARE COUNTED*/
		
		printf("\n1-Fever or chills");
		printf("\n2-Nasal congestion or cough");
		printf("\n3-Difficulty breathing, like you're short of breath");
		printf("\n4-Fatigue");
		printf("\n5-Muscle and body aches");
		printf("\n6-Headache");
		printf("\n7-Recent loss of smell or taste");
		printf("\n8-Sore throat");
		printf("\n9- Vomiting or diarrhea\n");
		
		scanf("\n%i", &covis);
			
			while(covis >9)
			{
				b= covis/10;
				
				a= covis %10;
			
			cont = cont +1;
			
			covis =b;
			}
			 printf("\n %i covid syntoms\n", cont);
		}	
		/*THE USER IS ASKED TO ADD UP THEIR PREVIOUS POINTS SO THAT THEY CAN DECIDE WHETHER OR NOT COVID IS INFECTED*/
		printf("\nenter how many symptoms and diseases you got at the end, for example: 6+9 = 15 points ->");
		int puntos;
		scanf("%i",&puntos); 
		for(i=0; i<user; i++){
		
		if(puntos>=9){
			system("cls");
		printf("user[%i]~ %s according to my calculations and thanks to the data entered, you have covid, you should go to a doctor\n\n \\\\\\\\COVID POSSITIVE//////",i , user[i].name);
		}
		else{system("cls");
				printf("CONGRATULATIONS USER[%i]- %s YOU DO NOT HAVE COVID! or well, that seems...\n\n \\\\\\\\COVID NEGATIVE//////",i , user[i].name);
			} break;
}
/*IN THE END THE USER IS ASKED IF THEY WANT TO USE THE TEST AGAIN AND IF NOT THEN ONLY A FAREWELL MESSAGE IS RETURNED*/
printf("\ndo you want to take this test again?");
printf("\n1-yes\n2-no\n");
scanf("%d", &qcaso);

system("cls");
printf("Thanks for use this test have a nice day;) !!!");
}
	return 0;
}
/*Name: Mr. Doki covid-test
	Author: Patricia Sofia Moya Tobias
	Date: 19/05/21 02:31*/
