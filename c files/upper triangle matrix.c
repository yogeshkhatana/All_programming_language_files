#include<conio.h>
#include<stdio.h>
void main()
{int a[10][10],m,n,i,j;
 printf("Enter the number of rows and columns:\n");
 scanf("%d%d",&m,&n);
 printf("Enter %d elements of matrix\n",m*n);
 for(i=0;i<m;i++)
  {for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
  }
  printf("Upper triangle matrix:\n");
  for(i=0;i<m;i++)
   {for(j=0;j<n;j++)
    {if(j>=i)
     printf("%d",a[i][j]);
     else
     printf(" ");
    }
    printf("\n");
   }
 getch();
}
