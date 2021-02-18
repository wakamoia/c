#include<stdio.h>

/*print the Fahrenheit-Celius table
      for fahr= 0,20,...,300*/
main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower=0;  /*lower limit of the table of temperatures*/
	upper=300; /*upper limit*/
	step=20; /*increment size*/
	
	main()
	;fahr=lower;
	while(fahr<=upper){
		celsius=5*(fahr-32)/9;
		printf("%d\t%d\n", fahr, celsius);
		fahr= fahr + step;
	}
}
