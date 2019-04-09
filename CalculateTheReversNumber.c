/* CalculateTheReversNumber */
#include <stdio.h>
#include <conio.h>

/* This code created by Sujit Mandal */

int main()
{
    int n, r_1, r_2;
    r_1 = 0;

    printf("Enter the number's: ");
    scanf("%d",&n);

    while(n != 0)
    {
        r_2 = n%10;
        r_1 = r_1*10+r_2;
        n/=10;
    }
    printf("\nRevers number is: %d",r_1);
    getch();
}

