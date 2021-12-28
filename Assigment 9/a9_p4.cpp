/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
 
int mycount(int a, int b)
{
    return b-a;
}
int mycount(char c, string x)
{
    int i=0;
    for(unsigned int n=0; n<x.length(); n++)
    {
        if(c==x[n])
        {
            i++;
        }
    }
    return i;
}
int main()
{
    int x,y;
    char c;
    string s;
    cin >> x >> y >> c ;
    getchar();
    getline(cin, s);
    cout << mycount(x,y) << endl;
    cout << mycount(c,s) << endl;
    return 0;
}
