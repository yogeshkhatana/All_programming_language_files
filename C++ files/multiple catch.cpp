#include<iostream>
#include<conio.h>
using namespace std;
void test(int x)
{
	try{
		
		if(x>0)
		  throw x;
		  else
		  throw 'y';
	}
	catch(int x)
	{
		cout<<"Catch a integer and that integer is:\n"<<x;
	}
	catch(char x)
	{
		cout<<"Catch a character and that character is:"<<x;
	}
}
int main()
{
	cout<<"Testing multiple catches\n:";
	test(10);
	test(0);
	return 0;
}
