// write a function to calculate the sum,product & average of two number,print that average in the main funcion,

#include <stdio.h>
void dowork(int a, int b, int *sum, int *product, int *avg);
int main()
{
    int a = 3 ,b = 5;
    int sum, product, avg;
    dowork(a, b, &sum, &product, &avg);
    printf("\n sum = %d,\n product = %d,\n avg = %d", sum, product, avg);
    return 0;
}
void dowork(int a, int b, int *sum, int *product, int *avg)
{
    *sum = a + b;
    *product = a * b;
    *avg = (a + b) / 2;
}