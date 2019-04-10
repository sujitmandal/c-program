/* FUNCTION WITH RETURN TYPE AND WITH ARGUMENT */
#include<stdio.h>

/* This program created by Sujit Mandal */

float add(float a, float b);
int main()
{
	float x,y,sum;
	
	printf("Enter tow intiger's: \n");
	scanf("%f%f",&x,&y);
	
	sum= add(x,y);
	
	printf("\nTHE SUM IS: %.2f",sum);
}
float add(float m, float n)
{
	float z;
	z=(m+n);
	return(z);
}
