#include <iostream>
#include <cstring>
 
using namespace std;
 
class NaiveString
{
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    void update(char, char);
    void print();
};
 
NaiveString::NaiveString(const char* t)
{
    str = new char[strlen(t) + 1];
    strcpy(str, t);
    cout << "Using parametric constructor" << endl;
}
 
NaiveString::NaiveString(const NaiveString& src)
{
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    cout << "Using copy constructor" << endl;
}
 
void NaiveString::update(char oldchar, char newchar)
{
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}
 
void NaiveString::print()
{
    cout << str << endl;
}
 
void funcByVal(NaiveString s)
{
    cout << "funcbyval() being called" << endl;
    s.update('B', 'C');
    s.print();
}
 
void funcByRef(NaiveString &s)
{
    cout << "funcbyref() being called" << endl;
    s.update('B', 'C');
    s.print();
}
 
int main(int argc, char** argv)
{
    NaiveString a("aBcBdB");
    NaiveString b(a);
    a.print();
    cout << "About to call funcbyval()" << endl;
    funcByVal(a);
    a.print();
 
    cout << endl << endl ;
    b.print();
    cout << "About to call funcbyref()" << endl;
    funcByRef(b);
    b.print();
}
