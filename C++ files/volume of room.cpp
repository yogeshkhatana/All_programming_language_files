#include<iostream>
using namespace std;
struct room
{
 float length;
 float breadth;
 float height;
};
int main()
{   
    float volume;
	struct room r;
	cout<<"Enter length of room:\n";
	cin>>r.length;
	cout<<"Enter breadth of room:\n";
	cin>>r.breadth;
	cout<<"Enter height of room:\n";
	cin>>r.height;
	volume=r.length*r.height*r.breadth;
	cout<<"Volume of room is:\n";
	cout<<volume;
	return 0;
	
}
