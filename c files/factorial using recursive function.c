#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{int n,c;
 printf("Enter the number:");
 scanf("%d",&n);
 c=fact(n);
 printf("Result is:%d",c);
 getch();
}int f=1;
int fact(int n)
{if(n==1)
 return 1;
 else
 f=n*fact(n-1);
 return f;

}
