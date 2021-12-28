#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
Complex a,b;
cout<<"Enter the real and imaginary part of the first complex"<<endl;
int c,d;
cin>>c>>d;
a.setReal(c);
a.setImagine(d);
cout <<"Printing before conjugation"<<endl;
a.print();
cout <<"Printing sum"<<endl;
Complex e;
e=a.add(b);
e.print();
cout << "Printing difference" << endl;
    Complex f;
    f=a.subtract(b);
    f.print();
 
    cout << "Printing multiplication" << endl;
    Complex g;
    g=a.multiply(b);
    g.print();
 
    return 0;
}
