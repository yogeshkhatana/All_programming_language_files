#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	
	int arr[5];
	int temp;
	
	cout<<"Enter two digits numbers:";
	for(int i=0;i<5;i++)
	 {
	 	cin>>arr[i];
	 	
	 }
	 for(int i=0;i<5;i++)
	  {
	  	for(int j=i+1;j<5;j++)
	  	 {
	  	 	if(arr[i]>arr[j])
	  	 	 {
	  	 	  temp=arr[i];
		      arr[i]=arr[j];
			  arr[j]=temp;		 	
			 }
			 else
			  continue;
		 }
	  }
	cout<<"Sorted array is:";
	for(int i=0;i<5;i++)
	 {
	 	cout<<arr[i];
	 }
	 
	 return 0;
}
