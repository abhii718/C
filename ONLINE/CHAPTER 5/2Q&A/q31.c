// Write a program to calculate area of a squre , a cirrcle & a rectangle.
#include<stdio.h>
float squreArea(float side);
float areaCircle(float radius);
float areaRectangle(float a, float b);

int main()
{
    float a = 5.0;
    float b = 10.0;
    printf(" area of rectangle is : %f \n", areaRectangle(a, b));
    return 0;

}
float squreArea(float side)
{
    return side * side;
}

float areaCircle(float radius)
{
    return radius * radius * 3.14;
}

float areaRectangle(float a, float b)
{
    return a * b;
}