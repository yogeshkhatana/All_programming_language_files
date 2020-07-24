#include<iostream>
using namespace std;
inline float cube(float s)
{
	return s*s*s;
	
}
int main()
{   
    int a;
	cout<<"Enter a value:\n";
	cin>>a;
	cout<<"Cube s:\n"<<cube(a);
	return 0;
}
