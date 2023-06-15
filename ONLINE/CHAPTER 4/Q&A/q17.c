/*Practice Qs 17

Keep taking numbers as input from user until user enters an odd number.*/

#include <stdio.h>
int main()
{  
    do
    {
        printf("Enter a number :");
        scanf("%d", &n);
        printf("%d\n", n);
       
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("thanku");
    return 0;
}