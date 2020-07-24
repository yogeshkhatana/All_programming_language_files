#include<iostream>
using namespace std;
class biggest
{
	private:
		int a,b;
	public:
		void input();
		void display();
};
void biggest::input()
{
	cout<<"Enter two numbers:";
	cin>>a>>b;
}
void biggest::display()
{
	cout<<"biggest number is:\n";
	if(a>b)
	cout<<"biggest no. is\n"<<a;
	else
	cout<<"biggest no. is"<<b;
}
int main()
{
	biggest b;
	b.input();
	b.display();
}
