#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{int a,b;
 printf("Enter the number:");
 scanf("%d",&a);
 b=fact(a);
 printf("Factorial is:%d",b);
 getch();
}
int n,f=1;
int fact(int n)
 {while(n>0)
  {f=f*n;
   n--;
  }
  return f;

}

