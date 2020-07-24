#include<conio.h>
#include<stdio.h>
void main()
{int i,j,k;
 for(i=0;i<5;i++)
  {for(j=4-i;j>0;j--)
    printf(" ");
    for(k=i+1;k>0;k--)
    printf("*");
    printf("\n");
   }
    getch();
   }
