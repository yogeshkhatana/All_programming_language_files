#include <iostream>
using namespace std; 

 class Calc
 {
  int val2;
  public:
  Calc(int x)
  {
   val2=x;
 }
};
 
 int main()
 {
  Calc c1(10);
  Calc c2(20);
  Calc c3(30);
  cout << c1.val2;
  cout << c2.val2;
  cout << c3.val2;
}
