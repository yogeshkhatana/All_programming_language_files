#include<iostream>
using namespace std;
void swapref(int *,int *);
int main()
{
	int a,b;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	cout<<"Values before function call:\n"<<a<<","<<b<<"\n";
	swapref(&a,&b);
	cout<<"Values after function call is:\n"<<a<<","<<b<<"\n";
	return 0;
}
void swapref(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"Values in function call:\n"<<*a<<","<<*b;
}
