#include <iostream>
#include "Creature.h"
 
using namespace std;
 
int main() 
{
   cout<<"Creating an Creature" ;
    Creature c;
    c.run();
    cout<<"Creating a Wizard."<<endl;
    Wizard w;
    w.run();
    w.hover();
    cout<<endl<<"Creating an Animal"<<endl;
    Animals a(2);
    a.run();
    a.time();
    cout<<endl<<"There already exist a Human"<<endl;
    Human h(5);
    h.lightyears();
    return 0;
}
