#include<conio.h>
#include<stdio.h>
void main()
{int a,b,c,d;
 printf("Enter the three no.:");
 scanf("%d%d%d",&a,&b,&c);
 {if(a>b)
  {if(a>c)
   printf("maximum is %d",a);
   else
   printf("maximum is %d",c);
   }
   else
    if(b>c)
    printf("maximum is%d",b);
    else
    printf("maximum is %d",c);
  }
  getch();
 }
