#include<stdio.h>
void main ()
{
 char  ch;
 printf("\n please enter any character \n");
 scanf("%c",&ch);
 if((ch>='a' && ch<='z'||(ch>='A' && ch<='Z'))
    printf("\n %c is an alphabet", ch);
    else 
    printf("\n%c is not an alphabet", ch);
    return 0;
    }
   
