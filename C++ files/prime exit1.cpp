#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter a number:\n";
	cin>>n;
	if(n<=1)
	{
		cout<<"Not a prime number\n";
		exit(1);
	}
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		 count++;
	}
	if(count==2)
	 
	 cout<<"Prime number\n";

     else
	 cout<<"Not a prime number:";
	return 0; 
}
