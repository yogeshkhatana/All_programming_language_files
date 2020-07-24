#include<conio.h>
#include<stdio.h>
int gcd(int,int);
void main()
{int a,b,c;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 c=gcd(a,b);
 printf("GCD of two numbers is=%d",c);
 getch();
}
 int gcd(int x,int y)
 {while(x!=y)
  {if(x>y)
   x=x-y;
   else
   {y=y-x;}
  }return(x);
 }
