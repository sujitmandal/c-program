/* FUNCTION WITHOUT RETURN TYPE AND WITH ARGUMENT */
#include<stdio.h>

/* This program created by Sujit Mandal */

float add(float, float);
int main()
{
	float x,y;
	printf("Enter tow intiger's: \n");
	scanf("%f%f",&x,&y);
	add(x,y);	
}
float add(float m, float n)
{ 
    float sum;
    sum=(m+n);
	printf("\nTHE SUM IS: %.2f",sum);
}
