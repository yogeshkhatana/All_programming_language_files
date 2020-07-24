#include<stdio.h>
#include<conio.h>
void main()
{int f=1,i,a,n,temp,s=0;
 printf("Enter the number");
 scanf("%d",&n);
 temp=n;
 while(temp>0)
  {a=temp%10;
   for(i=1;i<=a;i++)
    {f=f*i;
    }
    s=s+f;
    temp=temp/10;
    f=1;
  }
  if(s==n)
  printf("strong");
  else
  printf("not a strong nummber");
  getch();
}
