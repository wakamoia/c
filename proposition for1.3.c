#include<stdio.h>

#define lower 0
#define upper 300
#define step 20

int main (){
	int fahr; 
	int celsius;
	
    printf("Fahrenheit\tCelsius\n")
	
	;for(fahr=lower; fahr<= upper; fahr += step){
		celsius= 5*(fahr-32) / 9;
		printf("%3d\t\t%3d\n", fahr, celsius);
	}
}
