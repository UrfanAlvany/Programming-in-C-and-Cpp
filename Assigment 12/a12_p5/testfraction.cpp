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
 
    cout<<"The greater fraction is:"<<endl;
    if(a>b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
 
    cout<<"The addition of the two fractions:"<<endl;
    Fraction sum=a+b;
    cout<<sum<<endl;
 
    cout<<"The difference of the two fractions:"<<endl;
    Fraction diff=a-b;
    cout<<diff<<endl;
}
