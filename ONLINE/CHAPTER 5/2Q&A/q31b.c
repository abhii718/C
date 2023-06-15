// factorial n

int fact(int n);
int main()
{
    printf("fact is %d", fact(5));
    return 0;
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int factnum1 = fact(n - 1);
    int factnum = factnum1 * n;
    return factnum;
}