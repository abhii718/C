//Call by Address(Reference)
#include <stdio.h>
#define p printf
void f1(int *x);
int main() 
{
    int a = 5;
    p("a= %d\n",a);
    f1(&a);
    p("a= %d\n", a);
    return 0;
}
 void f1(int *x)
{
    *x = 10;
    p("x= %d\n",*x);
}