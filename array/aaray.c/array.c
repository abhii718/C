#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5][4][6];
    int i, j, k;
    printf("Enter the elements");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("in matrix As is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
return 0;
}
