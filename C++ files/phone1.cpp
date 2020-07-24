#include<iostream>
using namespace std;
struct phone
{
	int ac;
	int ex;
	int no;
};
int main()
{   int a,b,c;
    a=123;
    b=4567;
    c=3435;
	phone p1;
	cout<<"Enter your area code:\n";
	cin>>p1.ac;
	cout<<"Enter your exchange number:\n";
	cin>>p1.ex;
	cout<<"Enter your number:\n";
	cin>>p1.no;
	cout<<"My number is:\n("<<a<<") "<<b<<"-"<<c<<endl;
	cout<<"Your number is:\n("<<p1.ac<<") "<<p1.ex<<"-"<<p1.no<<endl;
	return 0;
}
