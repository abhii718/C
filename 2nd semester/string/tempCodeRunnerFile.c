#include <stdio.h>
int main()
{
    int s[9];
    for (int i = 0; i <= 8; i++)
    {
        printf("\n Enter marks: ");
        scanf("%d", &s[i]);
    }
    printf("\n marks is");
    for (int i = 0; i <= 8; i++)
    {
        printf("\n marks is =%d", s[i]);
    }
    return 0;
}