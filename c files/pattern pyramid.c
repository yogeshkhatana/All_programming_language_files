#include<conio.h>
#include<stdio.h>
void main()
{int i,j,k;
 for(i=1;i<=4;i++)
  {k=0;
  for(j=0;j<=4-i;j++)
  {printf(" ");}
  while(k!=2*i-1)
  {printf("*");
   k++;}
  printf("\n");}
  getch();

}
