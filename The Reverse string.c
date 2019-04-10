/* The Reverse string */
#include<stdio.h>

/* This program created by Sujit Mandal */

int main()
{
	int a,b,c=0;
	char s_1[100] = {"tijus"}, s_2[100];
	while( s_1[c] !='\0')
	c++;
	b = c-1;
	for(a=0; a<c; a++)
	{
	  s_2[a] = s_1[b];
	  b--;
      }
    s_2[a] = '\0';
	printf("The Reverse string is : %s",s_2);
}
