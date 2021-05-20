/*TO RUN THE PROGRAM YOU HAVE TO DO TWO FILES ONE WITH THE NAME function.h AND THEN THE PRINCIPAL FILE pia.c
warning!!! for some reason the program can't run on online C copiler correctly, please use another website to run it.
Description: this program can help you to know if waybe you have covid, a well-wearing test that you can use withoutleaving your home and with this you could go to the doctor and take care of your condition
Name: Mr. Doki covid-test
	Author: Patricia Sofia Moya Tobias
	Date: 19/05/21 02:31
	*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>
#include "function.h"

int main(){
	
	int op = 2;
    while(op == 2) //HERE THE USER IS ASKED IF THEY ARE READY TO START WITH THE TEST/
    {
	    printf(" are you ready to start the test?\nyes = 1\t\t\t\tno = 2\n");
  	    scanf("%d",&op); 
	    system("cls");
 		break; 
	}
	
    while(op == 2){ //IF THE ANSWER IS NOT THEN THE QUESTON IS REPEATED UNTIL YOU ARE READY/
		system("cls");
 
		printf("\t       Are you now?\nyes = 1\t\t\t\tno = 2\n");
 	 	scanf("%d",&op); 
		system("cls");
	}
	
	int cant,qcaso=1;
	
	while(qcaso== 1)
	{   printf("...");
		system("cls");
	  printf("hello there! my name is Ms. Doki and today im gonna help you to find out if you are a covid infected or if you just have a flu:D!\n");
	  printf("enter the data you are asked for such as age, weight, chronic diseases, these data are important for the final beedict\n\n");


{ fflush(stdin); //HERE THE USERS DATA IS COLLECTED/
		printf("~ your name: ");
	  	gets(user.name);	
	
	int age;
			printf("~ age: "); //IF THE USER IS IN A HIGH OR VERY RISKY AGE RANGE, THEY WILL BE INFORMED/
			scanf("%i" ,&age); 
				
	if(age > 21&&age < 50){
		printf("!!!ARE THE MOST INFECTED\n\n");
	}
		
	if(age > 51 )	{
		printf("POPULATION ARE GREATEST RISCK,STAY ALERT!!\n");
	}
	
	float h , w , imc;
		
	printf("~ height in meters: ");//IF THE USER DOES NOT KNOW HOW TO GET THIS BMIES OUT THEN THEY CAN DO IT HERE/
	scanf("%f", &h);
	printf("~ weight in kilogram: "); 
	scanf("%f", &w);
	imc=(w/(h*h));	
	printf("\t\t\t imc: %.1f", imc);	

	if( imc<18.5){//IF THE USER IS  LOW WEIGHT, OBESE OR OVERWEIGHT, THEY WILL BE INFORMED AS IT IS A FACTOR FOR COVID CONTAGION/
		printf("\n<low weight>\n");
	}
	if(imc>=25&&imc<30)	{
		printf("\n<overweight, prone to covid>\n");
		}
	if(imc>30)	{
		printf("\n<obesity, very prone to covid>\n");
		}		
	
		int issue, count=1, n, m;
		printf("\nDISEASES\nhow many of these diseases do you have?\n\nindicate it with numbers. example: 1234 or only <1> if you do not develop them \n>(2)diabetes,(3) obesity, (4)asthma, (5)adulthood<-\n");		
				printf(" ~ issues: "); //CHRONIC DISEASES ARE A VERY IMPORTANT FACTOR IN COVID CONTAGION, SO IT IS IMPORTANT TO HAVE THESE DATA/
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
			
		printf("\nCOVID\nhow many of these symptoms do you present?\n");//COVID SYMPTOMS ARE LISTED AND THE USER IS ASKED TO SPECIFY WHICH ONE THEY SUFFER FROM, THEN THEY ARE COUNTED/
		
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
			 printf("\n%i covid syntoms\n", cont);
		}	
		//THE USER IS ASKED TO ADD UP THEIR PREVIOUS POINTS SO THAT THEY CAN DECIDE WHETHER OR NOT COVID IS INFECTED/
		printf("\nenter how many symptoms and diseases you got at the end\nfor example: 6 points of DISEASES + 9 points of COVID = 15 TOTAL POINTS\n");
		int points,a, b;
		{

			printf("DISEASES POINTS: ");
	scanf("%i",&a);
	printf("COVID POINTS: ");
	scanf("%i",&b);
	points= a+b;
	printf("%i TOTAL POINTS\n\n", points);
	resultado(points);	
	} 

//IN THE END THE USER IS ASKED IF THEY WANT TO USE THE TEST AGAIN AND IF NOT THEN ONLY A FAREWELL MESSAGE IS RETURNED/
printf("\ndo you want to take this test again?");
printf("\n1-yes\n2-no\n-->");
scanf("%d", &qcaso);
}

system("cls");
printf("Thanks for use this test have a nice day;) !!!");

	return 0;
}
