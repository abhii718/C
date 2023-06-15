#include<stdio.h>
int main()
{
int a,b, *ptr;
a=10;
ptr=&a;
b=*ptr;
printf("Value of a %d,b=%d& ptr=%u",a,b,ptr);
getch();
}