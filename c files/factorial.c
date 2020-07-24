#include<conio.h>
#include<stdio.h>
void main()
{int n,f=1;
 printf("Enter a number:");
 scanf("%d",&n);
 while(n!=0)
  {f=n*f;
   n--;
  }
  printf("factorial:\n%d",f);
  getch();
}
