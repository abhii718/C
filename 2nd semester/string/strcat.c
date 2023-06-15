#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="mewar";
    char str2[]="instiitute";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="mewar";
    char str2[]="instiitute";
    strncat(str1,str2,3);
    printf("%s",str1);
    return 0;
}*/