#include<stdio.h>
#include<conio.h>

int main()
{
	int a,arr[100],i,n,j,temp;
	printf("Enter the number of elements to be sort:\n");
	scanf("%d",&n);
	printf("Enter %d array elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=arr[i];
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
