#include <iostream>
using namespace std;
/*
This program has similar issue, when constructors pf class B and class C invoke constructor of A twice, which is incorrect.
Therefore when constructor D is invoked, it invokes constructor B and C but those constructors does not invoke constructor A.
*/
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public:
    D(): A(10) { }
};
 
int main()
{
    D d;
    d.print();
    return 0;
}