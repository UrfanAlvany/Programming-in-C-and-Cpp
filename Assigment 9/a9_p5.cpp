/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    string s;
    cout << "What is your name?" <<endl;
    getline(cin,s);
    int  x;
    int d;
    int randomNumber;
    int count=0;
    srand(static_cast < unsigned int >(time(0)));
    randomNumber=rand();
    d=(randomNumber%100)+1;
 
    while(1)
    {
        count++;
        cout << "Enter your guess" << endl;
        cin >> x;
        if(x<d)
        {
          cout<<"You guessed too low"<<endl;
        }
            else if(x>d)
            {
                cout << "You guessed too high" << endl;
            }
            else
            {
                    cout << s << ",you guessed correctly after" << count << "tries" <<endl;\
                     break;
            }
 
    }
        return 0;
 
 
 
}
