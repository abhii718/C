// Write a function that prints Namaste if user is Indian & Bonjour of the user is French.
void namste();
void bonjour();

int main()
{
    printf("enter f for french & i for indian:  ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namste()
{
    printf(" namste\n ");
}
void bonjour()
{
    printf(" bonjour\n ");
}
