/*copy of two strings without  string function in c*/
#include <stdio.h>

/* This program created by Sujit Mandal */

int main()
{
    int i;
	char s_1[10], s_2[10];
	printf("Enter the text: ");
	scanf("%s",s_1);
    printf("\nString_1: %s\n\n", s_1);
    for(i = 0; s_1[i] != '\0'; i++)
    {
       s_2[i] = s_1[i];	 
		}
    s_2[i] = '\0';
    printf("String_2: %s\n", s_2);
    return 0;
}
