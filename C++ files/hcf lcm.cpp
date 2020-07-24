#include<iostream>
using namespace std;
#include<conio.h>
int gcd(int,int);
int main()
{
	
	int a,b,c,lcm;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c=gcd(a,b);
	lcm=(a*b)/c;
	cout<<"hcf:\n"<<c;
	cout<<"\nlcm:\n"<<lcm;
	return 0;
}
int gcd(int x,int y)
{
	while(x!=y)
	{
		if(x>y)
		 
		 x=x-y;
	     
		else
	
		  y=y-x;
}
      
		return y;  
	
}
	
	
	
	
