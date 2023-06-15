#include <stdio.h>
void main()
{

    int a[3][3], b[3][3], i, j;

    printf("Enter the elements of Ist 3* 3 Matrix");

    for (i = 0; i < 3; i++)

    {

        for (j = 0; j < 3; j++)

        {

            scanf("%d", a[i][j]);
        }
    }
    printf("Enter elements of Ist 3*3 Matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            scanf("%d", b[i][j]);
        }
    }

    printf("The sum matrix is");
    for (i = 0; i < 3; i++)

    {

        for (j = 0; j < 3; j++)

        a[i][i] = a[i][i] + b[i][j];
        printf("%d", a[i][j]);
    }
}