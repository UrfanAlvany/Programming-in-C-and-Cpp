#include <iostream>
#include "Creature.h"
using namespace std;
 
Creature::Creature() : distance(10)
{}
 
void Creature::run()const
{
     cout << "running " << distance << " meters!\n";
 
}
 
Creature::~Creature() {}
 
Wizard::Wizard(int a)
{
        distFactor=a;
}
 
void Wizard::hover()const
{
        cout << "hovering " << (distFactor * distance) << " meters!\n";
  
}
 
Wizard::~Wizard(){}
 
Animals::Animals(int a) : speed(a)
{}
 
void Animals::time() const
{
        cout<<"Crossing that distance("<<distance<<" m) for "<<(distance/speed)<<" seconds!\n";
 
}
 
Animals::~Animals(){}
 
Human::Human(int a) : time(a)
{}
 
void Human::lightyears() const
{
        cout<<"Human are crossing "<<time*distance*1000<<" lightyears of distance in that time."<<endl;
 
}
Human::~Human(){}
