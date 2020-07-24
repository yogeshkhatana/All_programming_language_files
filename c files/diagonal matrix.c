#include<stdio.h>
#include<conio.h>
void main()
{int a[10][10],i,j,m,n;
 printf("Enter the number of rows and columns:\n");
 scanf("%d%d",&m,&n);
 printf("Enter the %d elements of matrix:\n",m*n);
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
   }
   printf("Diagonal elements of the matrix are:\n");
   for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
     {if(i==j)
      printf("%d",a[i][j]);
     else
     printf(" ");}
     printf("\n");
    }
    getch();
}
