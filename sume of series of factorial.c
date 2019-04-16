/* write c program to find sume of series (1 + 1/2! + 1/3! + .... + 1/n!) */
#include <stdio.h>

/* This program created by Sujit Mandal */

int main()
{
	int i, j ,n, fact;
	float sum = 0.0;
	
	printf("Enter the limt: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact= 1;
		for(j=1; j<=i; j++)
		{
			fact = fact*j;
		}
		sum = (sum + (1.0)/fact);
	}
printf("\nThe sum of serise is: %.3f",sum); // [.3] means it will currect up to 3 decimal place
return (0);
}
