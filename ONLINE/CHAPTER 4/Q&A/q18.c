/*Practice Qs 18

Keep taking numbers as input from user until user
 enters a number which is multiple of 7.*/
 #include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a number :");
        scanf("%d", &n);
        printf("%d\n", n);
        if  (n = n * 7 != 7) // (n % 7 != 0) 
        {
            break;
        }
    } while (1);
    printf("thanku");
    return 0;
}