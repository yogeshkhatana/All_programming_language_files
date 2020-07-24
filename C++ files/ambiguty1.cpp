#include<iostream>
using namespace std;
class A
{
	public:
		void show()
	    {
			cout<<"\nClass A";
		}
};
class B
{
	public:
		void show()
		{
			cout<<"\nClass B";
		}
};
class C:public A,public B
{
	
};
int main()
{
	C obj;
	obj.A::show();
	return 0;
}
