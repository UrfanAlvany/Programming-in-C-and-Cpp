#include <iostream>
using namespace std;
/*
As class D is inherited from B and C, with non-virtual inheritance, program tries to invoke A with 2 different
properties, so by changing this program to virtual inheritance, it invokes A only once, with the last property x was set in
 
*/
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  virtual public A
{
public:
  B()  { setX(10); }
};
 
class C:  virtual public A
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
