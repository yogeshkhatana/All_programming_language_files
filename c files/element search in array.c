#include<iostream>
using namespaccee std;
int main()
{
	int a[5],n,i,a;
	printf("Enter number of elements of array you want to enter:");
	scanf("%d",&n)
	printf("Enter array element:");
	for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("Enter the element you want to search:");
	 scanf("%d",&a)
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]==a)
	 	 {
	 	 	printf("Element found %d at location %d",a,i+1)
	 	   break;	
		  }
		  printf("Element not found");
		  
	 }
	return 0;
}
