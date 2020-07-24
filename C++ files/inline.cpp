#include<iostream>
using namespace std;
inline float multiply(float x,float y)
{
	return (x*y);
}
const double divide(const double p,const double q)
{
	return (p/q);
}
int main()
{
	float a,b,c,d;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c=multiply(a,b);
	cout<<c<<"\n";
	 d=divide(a,b);
    cout<<d<<"\n";
	return 0;
}
