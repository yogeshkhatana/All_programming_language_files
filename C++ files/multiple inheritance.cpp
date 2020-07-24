#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	protected:
		
		int rno,m1,m2;
		public:
			void get()
			{
				cout<<"Enter the roll no";
				cin>>rno;
				cout<<"Enter the Marks gained in two subjects";
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
		cout<<"\nEnter the marks gained in sports:";
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
			cout<<"\n\nRoll no:"<<rno<<"\n\tTotal:"<<tot;
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
