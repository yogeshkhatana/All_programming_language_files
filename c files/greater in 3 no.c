#include<conio.h>
#include<stdio.h>
void main()
{int a,b,c;
 printf("Enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
  {
   if(a>c)
    {printf("a is greater that is :%d",a);
    }
    else
     printf("c is greater that is: %d",c);
  }
  else if(b>c)
   printf("b is greater that is:%d",b);
  else
  printf("c is greater that is: %d",c);
  getch();
}
