#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
 
 
// I must use using namespace std because the ostream
using namespace std;
 
class Fraction {
 
private:
    int num;
    int den;
 
    int gcd(int a, int b);
    int lcm(int a, int b);
 
public:
    Fraction();
    Fraction(int, int = 1);
    friend ostream& operator<<(ostream &os, const Fraction &a);
    friend istream& operator>>(istream  &in, Fraction &a);
    Fraction operator*(Fraction&);
    Fraction operator/(Fraction&);
};
 
 
#endif
