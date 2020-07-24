#include<iostream>
using namespace std;
int max(int,int);
int main()
{   int a,b,c;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	c=max(a,b);
	cout<<"Max value is:"<<c<<endl;
	return 0;
}
int max(int x,int y)
{
	int result;
	if(x>y)
	  result=x;
	  else
	  result=y;
	  
	 return result; 
}
