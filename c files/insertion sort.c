#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j,arr[100],temp;
	printf("Enter the maximum number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
      {
      	scanf("%d",&arr[i]);
	  }
	 for(i=1;i<n;i++)
	  {
	  	temp=arr[i];
	  	j=i-1;
	  while(j>=0&&arr[j]>temp)	
	   {
	   	arr[j+1]=arr[j];
	   	j=j-1;
	   }
         arr[j+1]=temp;	   
	  } 
	  printf("Sorted array is:");
	   for (i=0; i < n; i++) 
       printf("%d ", arr[i]); 
   printf("\n"); 
   getch();
}
