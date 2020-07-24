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
	cout<<"\nobject created"<<count;
	count++;
}
test::~test()
{
	cout<<"\nobject destroyed";
	
}
int main()
{

	cout<<"\nEnter main()";
	test t1,t2;
	{
		cout<<"\nInner";
		test t3,t4;
	}
	return 0;
	
}
