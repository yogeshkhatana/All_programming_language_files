#include<iostream>
using namespace std;
int count=0;
class test
{
	public:
		test();
		~test();
		
};
test::test()
{
	count++;
	cout<<"\nObject created "<<count;
}
test::~test()
{    
	cout<<"\nObject destroyed";
}
int main()
{
	cout<<"Enter main\n";
	test t1,t2;
	{
		cout<<"\nInner";
		test t3,t4;
	}
	return 0;
}
