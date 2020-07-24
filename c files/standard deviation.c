#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{float b,c,d,e,sum=0,sumn=0,f,average;
 int x[10],i,j,k;
printf("Enter 10 numbers");
for(i=0;i<10;i++)
 {scanf("%d",&x[i]);
 }
 for(j=0;j<10;j++)
 {sum=sum+x[j];
 }
 average=sum/10;
 printf("Average:%f\n",average);
 for(k=0;k<10;k++)
 {

  sumn=sumn+((x[k]-average)*(x[k]-average));



 }
 printf("sumn%f\n",sumn);
 e=sumn/10;
 f=sqrt(e);
 printf("standard variation%f",f);
 getch();
}


