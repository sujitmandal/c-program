/* concatenate two strings without  string function in c */
#include <stdio.h>

/* This program created by Sujit Mandal */

int main()
{
   char s_1[50], s_2[50];
   int i, j;
   printf("Enter the text: \n");
   scanf("%s%s",s_1,s_2);
   for(i=0; s_1[i]!='\0'; i++); 
   for(j=0; s_2[j]!='\0'; j++, i++)
   {
      s_1[i]=s_2[j];
   }
   s_1[i]='\0';
   printf("\nOutput: %s",s_1);
   return 0;
}
