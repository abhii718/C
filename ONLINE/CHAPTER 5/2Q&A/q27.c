// Write 2 function - one to print "Hello" & second to print "good bye".#include <stdio.h>
// declaration / prototype
void printHello();
void printgoodbye();

int main()
{
    printHello(); // function call
    printgoodbye();
    return 0;
}
// function defination
void printHello()
{
    printf("Hello\n");
}
void printgoodbye()
{
    printf("Goodbye\n");
}