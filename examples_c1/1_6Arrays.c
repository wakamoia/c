 #include <stdio.h>
 /* count digits, white space, and new lines */
 main()
 {
       int c, i, n\white, n\other;
       int n\digit[10];
       
             n\white = n\other = 0;
             
       for (i = 0; i < 10; ++i)
              n\digit[i] = 0;
              
       while ((c = getchar()) != EOF)
       if (c >= '0' && c <= '9')
             ++n\digit[c-'0'];
             
       else if (c == ' ' || c == '\n' || c == '\t')
             ++n\white;
             
       else
             ++n\other;
             
       printf("digits =");
       for (i = 0; i < 10; ++i)
       printf(" %d", n\digit[i]);
 printf(", white space = %d, other = %d\n",
        n\white, n\other);
 } 
