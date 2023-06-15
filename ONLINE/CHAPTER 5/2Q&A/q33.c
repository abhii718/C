// write a fuhction o calculate percentage of a student from Marks in Science ,Math & Sanskrit

int calcpercentage(int science, int math, int sanskrit);

int main()
{
    int science = 98;
    int math = 95;
    int sanskrit = 99;
    printf("percentage is : %d", calcpercentage(science, math, sanskrit));
    return 0;
}

int calcpercentage(int science, int math, int sanskrit)
{
    return (science + math + sanskrit) / 3;
}
