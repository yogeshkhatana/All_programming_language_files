#include<iostream>
using namespace std;
struct axis
{
	int x;
	int y;
}a,b,c,d;
int main()
 { 
	cout<<"Enter x coordinate and y coordinate 1:\n";
	cin>>a.x>>a.y;
	cout<<"Enter x and y coordinates for 2:\n ";
	cin>>b.x>>b.y;
	cout<<"Sum of x coordinates in 2 dimension:\n";
	c.x=a.x+b.x;
	cout<<c.x;
	cout<<"\nSum of y coordinates :\n";
	
	d.y=a.y+b.y;
	cout<<d.y;
}
