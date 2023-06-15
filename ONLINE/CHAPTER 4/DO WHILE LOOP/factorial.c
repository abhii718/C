#include <stdio.h>
int main()
{
    int n,fact;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("fact is %d\n", fact);
    return 0;
}