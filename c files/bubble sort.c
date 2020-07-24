#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,temp,n,arr[100];
	printf("\nEnter the maximum number of elements to sort");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{ if(arr[i]>arr[j])
	 		{
			temp=arr[i];
	 		arr[i]=arr[j];
	 		arr[j]=temp;
	 	}
		 }
     }
    printf("sorted array list is:");
    for(i=0;i<n;i++)
     {
     	printf("%d\t",arr[i]);
	 }
	 return 0;

}
