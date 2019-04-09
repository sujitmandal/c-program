/* write c program to find factorial of a number */
#include <stdio.h>

/* This program created by Sujit Mandal */

int main()
{
	int n, i, fact;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(n <= 0)
	fact = 1;
	for(i=1; i<=n; i++)
	fact = (fact*i);
	
	printf("\n%d factorial is %d",n, fact);
}
