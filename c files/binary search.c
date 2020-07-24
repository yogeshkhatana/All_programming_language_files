#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[100],lb=0,n,i,ub,x,mid;
	printf("Enter the number of elements you want to enter:");
	scanf("%d",&n);
	printf("Enter %d array elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value you want to search:");
	scanf("%d",&x);
	ub=n-1;
	mid=(lb+ub)/2;
	while(lb<=ub&&arr[mid]!=x)
	{
		if(arr[mid]<x)
		{
		lb=mid+1;}
		
		
		else 
		
		{
		ub=mid-1;
		mid=(lb+ub)/2;
	    }
   

    }
		 if(arr[mid]==x)
		{
			printf("Element %d found at location%d",x,mid+1);
			
		}
		else
		printf("Element not found");

	
	return 0;
}
