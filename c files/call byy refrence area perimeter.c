#include<stdio.h>
#include<conio.h>
void periarea(float,float,float *a,float *b);
void main()
{
 float len,br;
 float peri,ar;
 printf("Enter the length and breadth of rectangle in meters=\n");
 scanf("%f%f",&len,&br);
 periarea(len,br,&peri,&ar);
 printf("Perimeter of rectangle is=%fmeters",peri);
 printf("\nArea of the rectangle is=%fsquare meters",ar);
 getch();
}
void periarea(float length,float breadth,float *perimeter,float *area)
{*perimeter=2*(length+breadth);
 *area=length*breadth;
}
