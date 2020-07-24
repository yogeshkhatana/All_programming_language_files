#include<iostream>
using namespace std;
class base
{
	public:
		void display()
		{
			cout<<"\nDisplay base";
		}
		virtual void show()
		{
			cout<<"\nShow base";
			
		}
};
class derived:public base
{
	public:
	void display()
	{
		
		cout<<"\nDisplay derived";
	}
	void show()
	{
		cout<<"\nShow derived";
	}
	
};
int main()
{
	base b;
	derived d;
	base *bptr;
	cout<<"\nbptr points to base\n";
	bptr=&b;
	bptr->display();
	bptr->show();
	cout<<"\nbptr points to derived\n";
	bptr=&d;
	bptr->display();
	bptr->show();
    return 0;
	}
