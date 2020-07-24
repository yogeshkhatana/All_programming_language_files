#include<conio.h>
#include<stdio.h>
int gcd(int a,int b);
void main()
{int a,b,c;
 printf("Enter the numbers:");
 scanf("%d%d",&a,&b);
 c=gcd(a,b);
 printf("GCD is :%d",c);
 getch();
}
int x,y;
int gcd(int x,int y)
{if(x>y)
 gcd(x-y,y);
 else if(y>x)
 gcd(x,y-x);
 else if(x==y)
 return y;
}
