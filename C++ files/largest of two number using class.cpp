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
	cout<<"Enter two numbers:\n";
    cin>>a>>b;
}
void biggest::display()
{
	if(a>b)
	 cout<<"Biggest number is:"<<a;
	 else 
	 cout<<"Biggest number is:"<<b;
}
int main()
{
	biggest b;
	b.input();
	b.display();
	return 0;
	
}
