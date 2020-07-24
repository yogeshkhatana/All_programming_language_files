#include<iostream>
#include<conio.h>
using namespace std;
struct phone
{
	int ac;
    int ex;
    int no;
};

int main()
{ int a,b,c;
   a=123,b=456,c=3456;
	phone p1;

	cout<<"Enter your area code:\n";
	cin>>p1.ac;
	cout<<"Enter your exchange code:\n";
	cin>>p1.ex;
	cout<<"Enter your number\n:";
	cin>>p1.no;
		cout<<"My number is:\n("<<a<<") "<<b<<"-"<<c<<endl;
		cout<<"your number is:\n("<<p1.ac<<")"<<p1.ex<<"-"<<p1.no<<endl;
	return 0;
}
	

