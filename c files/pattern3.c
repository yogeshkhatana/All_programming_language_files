#include<conio.h>
#include<stdio.h>
void main()
{int i,j,k,n,c=80;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
  {for(j=1;j<=(c/2)-i;j++)
   {printf(" ");}
   for(k=1;k<=(2*i)-1;k++)
    {printf("*");}
    printf("\n");      }
    }

