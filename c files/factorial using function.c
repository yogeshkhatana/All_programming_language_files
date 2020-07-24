#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{int n,f=1,b;
 printf("Enter a number:");
 scanf("%d",&n);
 b=fact(n);
 printf("%d",b);
 getch();
}
int fact(int n)
{
 int f=1;
while(n!=0)
{f=f*n;
 n--;
}
 return f;
}


