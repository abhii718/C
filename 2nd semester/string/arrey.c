#include <stdio.h>

#define NUM_STUDENTS 9

int main()
{
    int marks[NUM_STUDENTS];
    
    printf("Enter marks for %d students:\n", NUM_STUDENTS);
    
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    printf("\nMarks entered:\n");
    
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
    
    return 0;
}
