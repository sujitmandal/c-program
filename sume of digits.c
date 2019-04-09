/* write c program to find sume of digits */
#include <stdio.h>
#include <conio.h>

/* This program created by Sujit Mandal */

int main()
{
	int n, t, r, sum;
	sum = 0;
	
	printf("Enter the number's: \n");
	scanf("%d",&n);
	
	t=n;
	while(t != 0)
	{
		r =t%10;
		sum = sum+r;
		t = t/10;
	}
	printf("Sum of the digits %d is: %d",n, sum);
	
}
