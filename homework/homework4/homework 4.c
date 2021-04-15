#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "library.h"
#define NUMBER '0'
#define MAXOP 100

int main(void){
      printf("Ready");

    int getop(char []);
    void push(double);
    double pop(void);

int num;
char s[MAXOP];
double firstn, a;
double variable[40];

while((num = getop(s)) != EOF){
        switch(num)
        {
                case NUMBER:
				        push(atof(s));
				        break;
                case '+':
                        push(pop()+pop());
                        break;
                case '*':
                        push(pop()*pop());
                        break;
                case '-':
                        firstn = pop();
                        push(pop()-firstn);
                        break;
                case '/':
                        firstn = pop();
                        if(firstn != 0.0)
                            push(pop()/firstn);
                        else
                            printf("oops :zero divisor\n");
                        break;      
                case '\n':
                        a = pop();
                        printf("\t%.6g\n",a);
                        break;
                default:
                        if(num>='A' && num<='Z')
                            push(variable[num-'A']);
                        else if(num =='a')
                            push(a);
                        else
                            printf("error: unknown command %s\n",s);
                        break;
}a=num;
return 0;
}
}
