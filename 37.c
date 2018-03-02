#include <stdio.h>

int main()
{
int i,j;
printf("enter the swap number");
scanf("%d%d",&i,&j);
printf("before swaping is %d%d", i,j);
{
    i=i+j;
    j=i-j;
    i=i-j;
}
printf("after swaping is %d%d", i,j);
return 0;
}
