#include <stdio.h>
int main()
{
    int i,n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
       printf("%d\n", n * i);
    }
    return 0;
}