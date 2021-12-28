#include <iostream>
 
using namespace std;
 
class Complex
 {
 private:
    float real; //real part
    float imag; //imaginary part
    char symbol;
 
 public:
    Complex(); //def constructor
    Complex(float, float, char); //set constructor
    Complex(const Complex&); //copy constructor
    ~Complex(); //destructor
 
    void setReal(float r); //setter
    void setImag(float i);
    void setSymbol(char s);
 
    float getReal(); //getter
    float getImag();
    char getSymbol();
 
    void conjugate(float r, float i, char s); //conjugation
    Complex operator+(const Complex&); //sum
    Complex operator-(const Complex&);//minus
    Complex operator*(const Complex&);//multiply
    friend ostream& operator<<(ostream&, Complex&);    // overloaded << output operator. Must be friend
    friend istream& operator>>(istream&, Complex&);
 
 
 }; // end class Complex