#include<conio.h>
#include<stdio.h>
int fact(int);
void main()
{int a,b;
 printf("Enter a number:");
 scanf("%d",&a);
 b=fact(a);
 printf("Factorial is:%d",b);
 getch();
}
int n,f=1;
int fact(int n)
{if(n==1)
 return f;
 else
 return n*fact(n-1);
}
