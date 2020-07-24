#include<iostream>
using namespace std;
int swap(int,int);
int main()
{
	int a,b,c;
	cout<<"Enter first number:\n";
	cin>>a;
	cout<<"Enter second number:\n";
    cin>>b;
    cout<<"Numbers before swapping:\n"<<a<<b;
    c=swap(a,b);
    cout<<"Numbers after swapping:\n"<<a<<b;
    return 0;
}
  int swap(int x,int y)
  {
  	int temp;
  	temp=x;
  	x=y;
  	y=temp;
  	cout<<"Value in function call"<<x<<y;
  }


