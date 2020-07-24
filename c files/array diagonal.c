#include<conio.h>
#include<stdio.h>
void main()
{int a[10][10],i,j,m,n;
 printf("Enter the number of rows and column:");
 scanf("%d",&m);
 scanf("%d",&n);
 printf("Enter values of first matrix:\n");
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    {scanf("%d",&a[i][j]);
    }

  printf("diagonal of matrix:\n");
    for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
      {if(i==j)
       printf("%d",a[i][j]);
       else
        printf(" ");
      }
      printf("\n");}
      getch();
}
