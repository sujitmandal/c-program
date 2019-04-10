/* FUNCTION WITH RETURN TYPE AND WITHOUT ARGUMENT */
#include<stdio.h>

/* This program created by Sujit Mandal */

float add();
int main()
{
	float sum;

	sum= add();
	
	printf("\nTHE SUM IS: %.2f",sum);
}
float add()
{
	float x,y,z;
	printf("Enter tow intiger's: \n");
	scanf("%f%f",&x,&y);
	
    z=(x+y);
	return(z);
}
