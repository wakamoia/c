#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
int fahr;  
    printf("fahrenheit\tcelsius\n");
	for(fahr=LOWER;fahr<=UPPER;fahr+=STEP)
		printf("%.2d\t\t\%.2d\n", fahr,(5*(fahr- 32)/9));
}
