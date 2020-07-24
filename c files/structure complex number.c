#include<stdio.h>
#include<conio.h>
struct complex
{int real;
 int img;
}a1,a2,a3;
void main()
{printf("Enter the real and imaginary part of first complex number:\n");
 scanf("%d%d",&a1.real,&a1.img);
 printf("Enter the real and imaginary part of second complex number:\n");
 scanf("%d%d",&a2.real,&a2.img);
 a3.real=a1.real+a2.real;
 a3.img=a1.img+a2.img;
 printf("\nZ=%d+i%d",a1.real,a1.img);
 printf("\nW=%d+i%d",a2.real,a2.img);
 printf("\nSum of the above complex number is:\n");
 printf("\nZ+W=%d+i%d",a3.real,a3.img);
 getch();
}
