/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    double x;
    string s;
    cout << "Insert value for how many times to be printed-(n)" << endl;
    cin >> n;
    cout << "Insert values for s" << endl;
    cin >> s;
    cout << "Insert value for x" << endl;
    cin >> x;
    for(int i=0; i<n; i++)
    {
        cout << s << ":" << x << endl;
    }
    return 0;
}