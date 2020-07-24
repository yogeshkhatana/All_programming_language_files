#include<conio.h>
#include<stdio.h>
void main()
{int a[10][10],b[10][10],c[10][10],d[10][10],e[10][10];
 int i=0,j=0,k=0,n;
 printf("Enter the value of n in n*n matrices=");
 scanf("%d",&n);
 printf("Enter the elements %d elements of first matrix",n*n);
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);}
  printf("Enter the elements %d elements of second matrix:",n*n);
  for(i=0;i<n;i++)
   {for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
   }
  for(i=0;i<n;i++)
   {for(j=0;j<n;j++)
    {
     c[i][j]=a[i][j]+b[i][j];
     d[i][j]=a[i][j]-b[i][j];
     e[i][j]=0;
     for(k=0;k<n;k++)
      e[i][j]=e[i][j]+a[i][k]*b[k][j];
    }
    }
   printf("Addition of two matrices is =\n");
   for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
     printf("%d",c[i][j]);
     printf("\n");
    }
   printf("Subtraction of two matrices is =\n");
    for(i=0;i<n;i++)
     {for(j=0;j<n;j++)
      printf("%d",d[i][j]);
      printf("\n");
     }
    printf("Multiplication of matrices is =\n");
     for(i=0;i<n;i++)
      {for(j=0;j<n;j++)
       printf("%d",e[i][j]);
       printf("\n");
      }
   getch();
}
