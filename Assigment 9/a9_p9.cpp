/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
string replace_vowels(string s)
{
    string f="";
    for(unsigned int i=0; i<s.length(); i++)
    {
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u')
        {
            f+='_';
        }
        else
        {
            f+=s[i];
        }
    }
    return f;
}
 
int main()
{
    string words[17]={"computer", "television", "keyboard", "laptop", "mouse", "case", "monitor", "razer", "chair", "light", "phone", "cable", "cake", "music", "presentation", "food", "counter"};
 
    srand ( static_cast < unsigned int >( time (0) ) );
    int n=rand()%17;
    int count=0;
    string e;
    while(1)
    {
        cout << replace_vowels(words[n]) << endl;
        count++;
        getline(cin,e);
        if(e=="quit")
        {
            break;
        }
        else if(e==words[n])
        {
            cout << "Correct guess after " << count << " tries" << endl;
            break;
        }
        else
        {
            cout << "Wrong guess, try again" << endl;
        }
    }
    return 0;
}
