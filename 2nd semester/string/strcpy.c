#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="mewar";
    char str2[]="instiitute";
    strcpy(str1,str2);
    printf("%s",str1);
    return 0;
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="mewar";
    char str2[]="instiitute";
    strncpy(str1,str2,3);
    printf("%s",str1);
    return 0;
*/