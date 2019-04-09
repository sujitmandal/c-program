/* check the number is Armstrong or not */
#include <stdio.h>

/* This program created by Sujit Mandal */

int main()
{
	int n, p, r_1, r_2;
	r_2 = 0;
	
	printf("Enter the number's: ");
	scanf("%d",&n);
	
	p = n;
	while(p != 0)
	{
		r_1 = p%10;
		r_2 += r_1*r_1*r_1;
		p/=10;
	}
	if(r_2 == n)
	{
		printf("\n%d is an Armstrong.",n);
	}
	else
	printf("\n%d is not an Armstrong.",n);
}
