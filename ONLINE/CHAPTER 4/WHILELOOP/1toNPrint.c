#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    while (i <= n)
    {
            printf("%d\n", i);
            i++;
    }
    return 0;
}