#include <iostream>
#include "Critter.h"
 
using namespace std;
 
void critter::setName(string& newname)
{
    name = newname;
}
 
void critter::setHunger(int newhunger)
{
    hunger = newhunger;
}
 
void critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}
 
int critter::getHunger()
{
    return hunger;
}
 
critter::critter()
{
    name="default_critter";
    height=5;
    boredom=0;
    hunger=0;
    cout << "Using default constructor" << endl;
}
 
critter::critter(string newname)
{
    name=newname;
    height=5;
    boredom=0;
    hunger=0;
    cout << "Using name constructor" << endl;
}
 
critter::critter(string name, int hunger, int boredom, double height)
{
    this->name=name;
    this->hunger=hunger;
    this->boredom=boredom;
    this->height=height;
    cout << "Using all parameters constructor" << endl;
}
