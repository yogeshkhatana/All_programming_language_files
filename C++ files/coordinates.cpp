#include<iostream>
using namespace std;
struct point
{
	int x;
	int y;
};
int main()
{
	point p1,p2,p3;
	cout<<"Enter the x coordinates of p1:\n";
	cin>>p1.x;
	cout<<"Enter the y coordinate of p1:\n";
	cin>>p1.y;
	cout<<"Enter the x coordinates of p2:\n";
	cin>>p2.x;
	cout<<"Enter the y coordinate of p2:\n";
	cin>>p2.y;
	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;
	cout<<"Sum of x coordinates is:\n";
	cout<<p3.x<<","<<p3.y;
	return 0;
}
