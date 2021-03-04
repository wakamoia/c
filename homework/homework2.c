#include<stdio.h>
#define K 13/*HOW MANY NUMBERS I WANT*/
#define MAX 400

int main () 
{       	long s, i, count=0;
	        long state=0;
          unsigned long bin= MAX;
 
	printf(K <= 1? "the first prime number is :\n\n": "the first %d prime numbers are\n\n", K);	printf("list");	
        	for (i = 3; count < K ; i++) { // any number devided by the first prime number
	          state=0;
	      	for (s = 3; s <= i; s++) {
		  
		      if (i % s==0)  //if is not equal to zero than is a prime number
	         	state++;
	    }
	      	if (state==1) {
                            printf("\t%d- ",i); //saves the value of every prime in an array
		      	count++;
			      state=0;
	      	for (bin = MAX; bin >0; bin>>=1) { //it passes the prime numbers and print them in binary 
		    
          if(bin & i)
	                          printf("1");
	      	else
	                          printf("0");
	       	}	
		                        printf("\n");
	    	}
	
    }
}
/* reference by
 AntonioCG2002
 RogelioASR
THE C PROGRAMMING LANGUAGE*/
