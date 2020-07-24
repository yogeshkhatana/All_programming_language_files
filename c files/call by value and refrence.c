#include<conio.h>
#include<stdio.h>
void swapval(int,int);
void swapref(int *,int *);
void main()
{int a,b;
 printf("Enter two numbers:\n");
 scanf("%d%d",&a,&b);
 printf("Before calling the function swapval a=%d,b=%d",a,b);
 swapval(a,b);
 printf("\nAfter calling the function swapval a=%d,b=%d",a,b);
 printf("\nBefore calling the function swapref a=%d,b=%d",a,b);
 swapref(&a,&b);
 printf("\nAfter calling the function swapref a=%d,b=%d",a,b);
 getch();
}
 void swapval(int x,int y)
 {int temp;
  temp=x;
  x=y;
  y=temp;
  printf("\nWithin the function swapval a=%d,b=%d",x,y);

 }
 void swapref(int *p,int *q)
 {int temp;
  temp=*p;
  *p=*q;
  *q=temp;
  printf("\nWithin the function swapref a=%d,b=%d",*p,*q);
}
