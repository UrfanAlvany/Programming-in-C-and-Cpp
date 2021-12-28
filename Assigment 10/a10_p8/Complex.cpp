#include "Complex.h"
#include <iostream>
    using namespace std;
Complex::Complex()
{
    this->real=0;
    this->imagine=0;
}
Complex::Complex(int real,int imagine)
{
    this->real=real;
    this->imagine=imagine;
}
Complex::Complex(const Complex &c)
{
this->real=c.real;    
this->imagine=c.imagine;
}
void Complex::setReal(int real)
{
     this->real=real;
}
void Complex::setImagine(int imagine)
{
     this->imagine=imagine;
}
int Complex::getReal()
{
    return this->real;
}
int Complex::getImagine()
{
    return this->imagine;
}
Complex Complex::conjugate()
{
    Complex temp(this->real,this->imagine*(-1));
    return temp;
}
Complex Complex::add(Complex c)
{
    Complex temp(this->real+c.real,this->imagine+c.imagine);
    return temp;
}
Complex Complex::subtract(Complex s)
{
    Complex temp(this->real-s.real,this->imagine-s.imagine);
    return temp;
}
Complex Complex::multiply(Complex m)
{
     Complex temp(this->real*m.real-this->imagine*m.imagine,this->imagine*m.real+this->real*m.imagine);
     return temp;
}
void Complex::print()
{
    if(this->imagine>0)
    {
        cout << this->real << "+" << this->imagine << "i" << endl;
    }
    else if(this->imagine==0)
    {
        cout << this->real << endl;
    }
    else
    {
        cout << this->real << this->imagine << "i" << endl;
    }
}
