/*CH-230-A
a11-p2.c
Urfan Alvani    
ualvani@jacobs-university.de */
 
#include <iostream>
 
using namespace std;
 
class Creature
{
public:
    Creature();
    void run() const;
 
protected:
    int distance;
};
 
Creature::Creature(): distance(10)
{}
 
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}
 
class Wizard : public Creature
{
public:
    Wizard();
    void hover() const;
 
private:
    int distFactor;
};
 
Wizard::Wizard() : distFactor(3)
{}
 
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
 
class Animals : public Creature
{
public:
    Animals(int);
    void time() const;
private:
    int speed;
};
 
Animals::Animals(int a) : speed(a)
{}
 
void Animals::time() const
{
    cout<<"Crossing that distance("<<distance<<" m) for "<<(distance/speed)<<" seconds!\n";
}
 
class human : public Creature
{
public:
    human(int);
    void lightyears() const;
private:
    int time;
};
 
human::human(int a) : time(a)
{}
 
void human::lightyears() const
{
    cout<<"human are crossing "<<time*distance*1000<<" lightyears of distance in that time."<<endl;
}
 
int main()
{
    cout<<"Creating an Creature.\n";
    Creature c;
    c.run();
    cout<<"\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    cout<<endl<<"Creating an Animal."<<endl;
    Animals a(2);
    a.run();
    a.time();
    cout<<endl<<"There already exists an human"<<endl;
    human b(5);
    b.lightyears();
    return 0;
}
