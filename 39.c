#include <stdio.h>
#define math.h

int main()
{
int a[10],i,j,n,max=-10000000;
printf("enter the ten number");
scanf("%d",&a[i]);
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    for(j=1;j<=n;++j)
    {
      if(a[i]>max)
      {
          a[i]=max;
      }
    }
}
printf("the greatest value is%d",a[i]);
return(0);
}
