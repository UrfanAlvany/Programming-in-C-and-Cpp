#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
    Critter c;
 
    string name;
    int hunger;
    int power;
    int stamina;
 
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    cout <<"Stamina:";
    cin >> stamina;
    c.setStamina(stamina);
    cout <<"Power:";
    cin >> power;
    c.setPower(power);
    cout << "You have created:" << endl;
    c.print();
        return 0;
}
