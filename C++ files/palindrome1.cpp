#include<iostream>
using namespace std;
int main()
{
	int n,num,rev=0,digit;
	cout<<"Enter a positive number:";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}while(num!=0);
	
	
	cout<<"The reverse of number is:\n"<<rev<<endl;
	if(n==rev)
	{
		cout<<"Number is palindrome\n";
	}

	cout<<"Number is not palindrome\n";
     return 0;
}
