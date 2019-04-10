/*compare two strings without using string function in c*/
#include<stdio.h>

/* This program created by Sujit Mandal */

main()
{

       char s_1[5],s_2[5];
       int i, j= 0;
       printf("Enter the text: \n");
       scanf("%s%s",s_1,s_2);
       for(i=0; s_1[i]!='\0'; i++)
       {
              if(s_1[i] == s_2[i])
              j = 1;
              else
              j = 0;
       }
       if(j == 1)
       printf("\nstrings are same.");
 else
    printf("\nstring are not same.");
}  
