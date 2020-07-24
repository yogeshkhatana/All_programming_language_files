#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
    cout<<"Enter two  numbers:\n";
    cin>>a>>b;
    cout<<"Before swapping:\n"<<a<<","<<b;
    swap(a,b);
    cout<<"After swapping:\n";
    cout<<a<<","<<b;
    return 0;
}
 void swap(int x,int y)
   {
   	int temp;
   	temp=x;
   	x=y;
   	y=temp;
   	cout<<"Value of a and b in function call:\n"<<x<<","<<y;
   }
