#include<conio.h>
#include<stdio.h>
void main()
{
 int i,n=10,j,arr[10],flag=0;
 printf("Enter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
  {
  for(j=1+1;j<n;j++)
   {
    if(arr[i]==arr[j]&&i!=j)
     {flag=1;
      printf("duplicate elements found at location%d and %d",i,j);
     }

     }
     }
      if(flag==0)
    {

     printf("No duplicate elements found");
    }



  getch();
}
