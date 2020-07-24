#include<iostream>
using namespace std;
template<class t1,class t2>
void sort(t1 arr[],t2 n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{  if(arr[i]>arr[j])
			{
			t1 temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		    }
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the no. of elements:";
	cin>>n;
    cout<<"Enter"<<n<<"integers";
    int iarr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>iarr[i];
	}
	cout<<"Enter "<<n<<"float values:\n";
	float farr[n];
	for(int i=0;i<n;i++)
	{
		cin>>farr[i];
	}
	sort(iarr,n);
	sort(farr,n);
	cout<<"after sorting integer values are:\n";
	for(int i=0;i<n;i++)
	{
		cout<<iarr[i]<<" ";
	}
	cout<<"after sorting float values are:\n";
	for(int i=0;i<n;i++)
	{
		cout<<farr[i]<<" ";
	}
	return 0;
}
