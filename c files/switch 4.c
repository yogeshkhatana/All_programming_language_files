#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{int ch,n;
 printf("1.square\n");
 printf("2. square root\n");
 printf("3.cube\n");
 printf("4.Enter your choice\n");
 scanf("%d",&ch);
 printf("Enter the number:\n");
 scanf("%d",&n);
 switch(ch)
 {case 1:
   printf("square:%d",n*n);
   break;
  case 2:
   printf("square root:%f",sqrt(n));
   break;
  case 3:
   printf("cube:%d",n*n*n);
   break;
  default:
   printf("The number you had given is %d",n);
   getch();
 }
}
