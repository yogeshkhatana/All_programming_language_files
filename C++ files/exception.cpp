#include<iostream>
#include<conio.h>
using namespace std;
void test(int x)
{
	try
	{
		if(x>0)
		 throw x;
		else
		 throw 'x';
	}
	catch(int a)
	{
		cout<<"Catch a integer and that integer is:"<<x;
	}
	catch(char a)
	{
		cout<<"Catch a character and that character is:"<<x;
	}
}
int main()
{
	cout<<"Testing multiuple catches:\n";
	test(10);
	test(0);
	getch();
}
