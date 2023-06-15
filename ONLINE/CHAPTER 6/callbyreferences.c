//Call by Address(Refrences)

#include <stdio.h>
void f1(int x);
int main() 
{
    int a = 5
    printf("a= %d &  b=%d\n", a, b);
    f1(a, b);
    return 0;
}
 void f1(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    printf("x= %d &  y=%d\n", x, y);
}