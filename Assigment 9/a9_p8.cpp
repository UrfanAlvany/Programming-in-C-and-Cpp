/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
using namespace std;
 
void subtract_max(int *x,int  n)
{
 int i=x[0];
 for(int e=1;e<n;e++)
            {
                if(x[e]>i)
                    {
                        i=x[e];
                    }
            }
                for(int h=0;h<n;h++)
                {
                    x[h]-=i;
                }
 
}
 
 
 
void deallocate(int *x)
{
        delete[]x;
}
 
int main()
{
 int n;
 cin >> n;
 int *x=new int[n];
 for(int i=0;i<n;i++)
 {
     cin >> x[i];
 }
        subtract_max(x,n);
        for(int i=0;i<n;i++)
        {
            cout << x[i] << endl;
        }
        deallocate(x);
        return 0;
 
 
 
}
