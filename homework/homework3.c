#include <stdio.h>
#include<ctype.h>
#define ON 1
#define OFF 0

int main(){


	int c, skip, num, all, quo;
	int parenthesis= OFF, brackets=OFF, braces=OFF, single_q=OFF, double_q=OFF;
    int ignore=0;
	
while((c = getchar()) != EOF) {
		ignore= OFF;
		switch (c) {
			case '(':
				parenthesis++;
				break;
			case '[':
				brackets++;
				break;
			case '{':
				braces++;
				break;
			case ')':
				parenthesis--;
				break;
			case ']':
				brackets--;
				break;
			case '}':
				braces--;
				break;
			case '\'':
				single_q = !single_q;
				break;
			case '\"':
				double_q = !double_q;
				break;
		     case '.':
			    ignore = ON;
				break;
			case ',':
				ignore = ON;
				break;
			case ';':
				ignore = ON;
				break;
			case '_':
				ignore = 1;
				break;
		    case '!':
				ignore = 1;
				break;
			case '?':
				ignore = 1;
				break;}
	if(ignore)
	{
       	continue;
		}
     			
		if (c!=','&&c!='.'&&c!=':'&&c!=';'&&c!='_'&&c!='!'&&c!='?'){
			if (parenthesis==ON||quo==OFF)
				putchar(c);
		
		    if ((all % 2) != 0 && skip == 1)
			putchar (c);
			
		if (c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'&&(all%2)!=0){
			num==1 ? :putchar('X');

		}
			else if(skip==1&&(all%2)==0){
			putchar(c);
			num=0;
			}

}
}
}
/*REFERENCE BY HECTORMTZ22,ROGELIOASR AND ANTONIOCG2002*/
