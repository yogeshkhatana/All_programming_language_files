#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int var=55;
    cout<<*&var<<endl;
    cout<<&var<<endl;

   int *p;
   p=&var;
   cout<<*p<<endl;
   cout<<"Gujjar";
   return 0;

}
