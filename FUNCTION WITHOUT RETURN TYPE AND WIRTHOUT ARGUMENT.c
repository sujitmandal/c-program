/* FUNCTION WITHOUT RETURN TYPE AND WIRTHOUT ARGUMENT */
#include<stdio.h>

/* This program created by Sujit Mandal */

float add();
int main()
{

	add();	
}
float add()
{ 
    float x,y,s;
	printf("Enter tow intiger's: \n");
	scanf("%f%f",&x,&y);
    s=(x+y);
	printf("\nTHE ADD IS: %.2f",s);
}
