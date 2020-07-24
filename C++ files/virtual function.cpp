#include<iostream>
using namespace std;
class base{
	public:virtual void print()
	{
		
		cout<<"print base class"<<endl;
	}
	virtual void show()
	{
		cout<<"Show base class"<<endl;
	}
	
};
class derived:public base{
public:
	void print()
	{
		cout<<"Print derived class"<<endl;
	}
	void show()
	{
		cout<<"show derived class"<<endl;
	}
};
int main()
{
	base b;
	derived d;
	base *bptr;
	bptr=&b;
	bptr->print();
	bptr->show();
	bptr=&d;
	bptr->print();
	bptr->show();
	}
