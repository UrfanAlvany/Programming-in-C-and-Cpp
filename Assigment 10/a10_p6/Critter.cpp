#include <iostream>
#include "Critter.h"
 
using namespace std;
 
void Critter::setName(string& newname)
{
    name = newname;
}
 
void Critter::setHunger(int newhunger)
{
    hunger = static_cast<double>(newhunger)/10;
}
 
void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger*10 << "." << endl;
}
 
int Critter::getHunger()
{
    return hunger*10;
}
 
Critter::Critter()
{
    name="default_critter";
    height=5;
    boredom=0;
    hunger=0.2;
    thirst=hunger;
    cout << "Using default constructor" << endl;
}
 
Critter::Critter(string newname)
{
    name=newname;
    height=5;
    boredom=0;
    hunger=0.2;
    thirst=static_cast<double>(hunger)/10;
    cout << "Using name constructor" << endl;
}
 
Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name=name;
    this->hunger=hunger;
    this->boredom=boredom;
    this->height=height;
    this->thirst=static_cast<double>(hunger)/10;
 
    cout << "Using all parameters constructor" << endl;
}
Critter::Critter(string name, int hunger, int bordom, double height, double thirst)
{
    this->name=name;
    this->hunger=hunger;
    this->boredom=boredom;
    this->height=height;
    this->thirst=thirst;
    cout << "Using all parameters plus thirst constructor" << endl;
}
