#include <stdio.h> 
#include <conio.h> 

void main()
{
        int a,b, max;
printf("Enter the two numbers a and b \n");
scanf("%d %d", &a, &b);
max = (a > b) ? a : b; // conditional operator; Aam
printf("The maximum of two numbers is %d", max);
getch();
}