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
    cout << "Using default constructor" << endl;
}
 
Critter::Critter(string newname)
{
    name=newname;
    height=5;
    boredom=0;
    hunger=0.2;
    cout << "Using name constructor" << endl;
}
 
Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name=name;
    this->hunger=hunger;
    this->boredom=boredom;
    this->height=height;
    cout << "Using all parameters constructor" << endl;
}
