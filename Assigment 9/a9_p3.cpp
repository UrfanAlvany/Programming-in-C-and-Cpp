/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
using namespace std;
float abss(float x)
{
    if(x<0)
    {
            return -x;
 
    }
        else
        {
          return x;
        }
 
}
int main()
{
    float x;
    cin >> x;
    cout << abss(x) << endl;
    return 0;
}
