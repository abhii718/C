#include <stdio.h>
//declaration / prototype
void printHello();

int main()
{
    printHello(); //function call
    printHello();
    return 0;
}

//function defination
void printHello()
{
    printf("Hello\n");
}