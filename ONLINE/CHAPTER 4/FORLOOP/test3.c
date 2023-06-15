#include<stdio.h>
int main ()
{
int i = 2;
printf("%d%d%d%d ",i,i++,i++,++i);
printf("%d ",++i);
printf("%d ",i++);
return 0; 
}  
