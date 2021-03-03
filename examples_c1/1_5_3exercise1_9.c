#include<stdio.h>
 main()
{
int c, nl;
    nl=0;
 while((c=getchar()) !=EOF){
 if(c==' '|c=='\n'|c=='\t')
   putchar(' ');
   while((c= getchar())==' ');
 }  
   putchar(c);
}
