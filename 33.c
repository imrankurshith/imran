#include<stdio.h>
void main()
{
	char a[1000];
	int b=0,c=0,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		b=++c;
	}
	printf("%d",b);
	return 0;
}  
