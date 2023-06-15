#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("print %d number is\n ", number);
    do
    {
        printf("Guess the numbet between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Higher the number\n");
        }
        else if (guess > number)
        {
            printf("Lower the number\n");
        }
        else
        {
            printf("you guess in %d attemp\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}
