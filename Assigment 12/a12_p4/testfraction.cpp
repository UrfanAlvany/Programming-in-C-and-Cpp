#include <iostream>
#include "fraction.h"
 
using namespace std;
 
int main(void)
{
    Fraction a,b;
    cout<<"Enter the nominator and denominator for the first fraction:"<<endl;
    cin>>a;
    cout<<"Enter the nominator and denominator for the second fraction:"<<endl;
    cin>>b;
 
    cout<<"The multiplication of the first and second fraction is:"<<endl;
    cout<<a*b<<endl;
 
    cout<<"The division of the first and second fraction is:"<<endl;
    cout<<a/b<<endl;
}
