#include<iostream>
using namespace std;
inline float multiply(float x,float y)
{
	return x*y;
}
const double divide(const double p,const double q)
{
	return p/q;
}
int main()
{ int a,b,c;
  cout<<"Enter two numbers:";
  cin>>a>>b;
  c=multiply(a,b);
  cout<<"Multiply="<<c<<"\n"<<"Divide="<<divide(a,b);
  return 0;
}

