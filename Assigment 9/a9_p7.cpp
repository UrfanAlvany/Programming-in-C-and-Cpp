/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
using namespace std;
void swapping(int &a,int &n)// swap ints
{
    int t=a;
    a=n;
    n=t;
}
 
void swapping(float &a,float &n) // swap floats
{
 float t=a;
 a=n;
 n=t;
}
 
 
void swapping(const char* &a,const char* &n) // swap char pointers
 
{
    const char* t=a;
    a=n;
    n=t;
}
 
 
 
 
int main(void) {
int a = 7, b = 15;
float x = 3.5, y = 9.2;
const char *str1 = "One";
const char *str2 = "Two";
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b);
swapping(x, y);
swapping(str1, str2);
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}
