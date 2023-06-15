#include <stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++) //break for loop se exit karata hai
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
    }
    printf("end");
    
    return 0;
}