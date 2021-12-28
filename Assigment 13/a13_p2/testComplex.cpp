#include "Complex.h"
#include <iostream>
#include <fstream>
using namespace std;
 
int main()
 {
 ifstream f1;
    if(!f1.is_open()) //for opening file 1
        f1.open("in1.txt", ios::in);
    if(!f1.good()){
        cout<<"Error" <<endl;
        return 0;
    }
 ifstream f2;
    if(!f2.is_open()) //for opening file 2
        f2.open("in2.txt", ios::in);
    if(!f2.good()){
        cout<<"Error" <<endl;
        return 0;
    }
ofstream f3;
    if(!f3.is_open()) //for writing into output file
        f3.open("output.txt", ios::out);
    if(!f3.good()){
        cout<<"Error" <<endl;
        return 0;
    }
 
    Complex a;
    Complex b;
    Complex c;
    f1>> a;
    f2>> b;
    c= a+b;
    f3<<c;
    c=a*b;
    f3<<c;
    c= a-b;
    f3<<c;
    cout<<"Results printed to output.txt!";
 
    f1.close();
    f2.close();
    f3.close();
 
 
 return 0;
 }
