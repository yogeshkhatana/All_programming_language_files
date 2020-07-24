#include<conio.h>
#include<stdio.h>
void main()
{int f=1,n;
 printf("Enter number:");
 scanf("%d",&n);
 while(n>0)
  {f=f*n;
   n--;
  }
  printf("Factorial is:%d",f);
  getch();
}
