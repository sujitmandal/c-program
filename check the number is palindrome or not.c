/* check the number is palindrome or not */
#include <stdio.h>

/* This program created by Sujit Mandal */

int main()
{
	int n, r_1, r_2, p;
	
	printf("Enter the number's: ");
	scanf("%d",&n);
	
	p = n;
	while(n != 0)
	{
		r_2 = n%10;
		r_1 = r_1*10+r_2;
		n/=10;
	}
	if(p == r_1)
	{
		printf("\n%d is a palindrome.",p);
	}
	else
	printf("\n%d is not a palindrome.",p);
}
