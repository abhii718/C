//Call by Address(Refrences)

#include <stdio.h>
void f1(int *x, int *y);
int main() 
{
    int a = 3, b = 4;
    printf("a= %d &  b=%d\n", a, b);
    f1(&a, &b);
    printf("a= %d &  b=%d\n", a, b);
    return 0;
}
 void f1(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
    printf("x= %d &  y=%d\n", *x,*y);
}