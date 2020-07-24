#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
{int a,b,c;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 c=gcd(a,b);
 printf("Result is:%d",c);
 getch();
}
int gcd(int x,int y)
{ while(x!=y)
   {if(x>y)
  return gcd(x-y,y);
 else
 return gcd(x,y-x);
   }
 return x;

}
