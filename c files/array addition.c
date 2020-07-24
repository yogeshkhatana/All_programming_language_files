#include<stdio.h>
#include<conio.h>
void main()
{int a[10][10],b[10][10],c[10][10],i,j,m,n;

 printf("Enter number of rows:");
 scanf("%d",&m);
 printf("Enter the number of column:");
 scanf("%d",&n);
 printf("Enter the elements of first matrix:");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {scanf("%d",&a[i][j]);
  }
 printf("Enter the elements of second matrix:");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   {scanf("%d",&b[i][j]);
    printf("\t");
   }
   printf("The sum of matrix:");
   for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     {c[i][j]=a[i][j]+b[i][j];

      printf("%d\t",c[i][j]);}
      printf("\n");

     getch();
}
