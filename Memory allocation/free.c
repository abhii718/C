#include <stdio.h>
#include <stdlib.h>
int main()
{
    // use of malloc
    int *ptr;
    int n;

    printf("Enter the size of the new array you want to creat   ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this arry\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is %d\n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }

    printf("Enter the size of the new array you want to creat\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this arry\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is %d\n", i, ptr[i]);
        // scanf("%d",&ptr[i]);
    }


    free(ptr); 
    return 0;
}