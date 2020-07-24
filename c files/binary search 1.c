#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],lb=0,ub,i,n,a,mid;
	printf("Enter no. of elements of  array\n:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	lb=0;
	ub=n-1;
	mid=(lb+ub)/2;
	printf("Enter the element to be search:");
	scanf("%d",&a);
	while(lb<=ub&&arr[mid]!=a)
	{
		if(arr[mid]>a)
		{
			ub=mid-1;
			
		}
		else if(arr[mid]<a)
		{
			lb=mid+1;
			mid=(lb+ub)/2;
			
		}
	}
if(arr[mid]==a)
{
	printf("Element %d found at location %d",a,mid+1);
}
else
printf("Element not found:\n");
return 0;
}
