#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[100],n,i,j,temp;
 printf("Enter the number of elements to be sort:\n");
 scanf("%d",&n);
 printf("Enter array elements:\n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&arr[i]);
 }
 printf("Sorted array  is:");
 for(i=1;i<n;i++)
 {
 	temp=arr[i];
 	j=i-1;
 	while(j>=0&&arr[j]>temp)
 	{arr[j+1]=arr[j];
 	j=j-1;
	 }
	 arr[j+1]=temp;
 }
 printf("Sorted array is:");
 for(i=0;i<n;i++)
 {
 	printf("%d",arr[i]);
 }
 getch;
}
