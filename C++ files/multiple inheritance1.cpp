#include<iostream>
using namespace std;
class student
{
	protected:
		int rno,m1,m2;
		public:
			void get()
			{
				cout<<"Enter the roll number:\n";
				cin>>rno;
				cout<<"Enter the marks gained in two subjects:\n";
				cin>>m1>>m2;
			}
};
class sports
{
	protected:
		int sm;
		public:
			void getsm()
			{
				cout<<"\nEnter marks gained in sports:\n";
				cin>>sm;
			}
};
class statement:public student,public sports
{
	int tot,avg;
	public:
		void display()
		{
			tot=(m1+m2+sm);
			avg=tot/3;
			cout<<"\n\nRoll no."<<rno<<"\n\Total:"<<tot;
			cout<<"\n\tAverage:"<<avg;
		}
};
int main()
{
	statement obj;
	obj.get();
	obj.getsm();
	obj.display();
	return 0;
}
			
