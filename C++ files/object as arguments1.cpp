#include<iostream>
using namespace std;
class demo
{
	private:
		int a;
	public:
		void set(int x)
		{
			a=x;
		}
		void sum(demo obj1,demo obj2)
		{
			a=obj1.a+obj2.a;
		}
		void print()
		{
			cout<<"Value of A:"<<a<<endl;
		}
};
int main()
{
	demo d1,d2,d3;
	d1.set(10);
	d2.set(20);
	d3.sum(d1,d2);
	d1.print();
	d2.print();
	d3.print();
	return 0;
}
