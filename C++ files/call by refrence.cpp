#include<iostream>
using namespace std;
int swapref(int *,int *);
int main()
{
 int a,b,c;
 cout<<"Enter two numbers:\n";
 cin>>a>>b;
 cout<<"Value before swapping:"<<a<<b;
 c=swapref(&a,&b);
 cout<<"Value after swapping:"<<a<<b;
 return 0;
}
int swapref(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
     *y=temp;
	cout<<"Value in function call"<<*x<<*y;
}
