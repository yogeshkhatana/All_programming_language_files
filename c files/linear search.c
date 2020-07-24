#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[100],x,n,i;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be search:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
{
		
	if(arr[i]==x)
	{
	printf("Element %d found at location%d",x,i+1);
	break;
	}
	}
	
if(i==n)	{
	printf("Element not found");}
	return 0;
}
