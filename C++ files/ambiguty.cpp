#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	public:
		void show()
		{
			cout<<"\nClass A";
		}
};
class B{
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
	obj.B::show();
	return 0;
}
