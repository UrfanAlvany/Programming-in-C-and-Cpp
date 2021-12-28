#include <iostream>
#include <stdio.h>
#include "Creature.h"
 
 
using namespace std;
 
int main() 
{
    Animals *i;
    Wizard *j;
    Human *q;
    Creature *w;
    w=new Creature;
    while (1)
    {
        cout<<"Enter which creature you want to create:(Wizard,Animals,Human) or (quit)"<<endl;
        string e;
        getline(cin,e);
        if (e=="quit")
        {
            delete w;
            return 0;
        }
        else if(e=="Animals")
        {
                cout<<"Enter the speed of the animal:";
                int m;
                cin>>m;
                getchar();
                i=new Animals(m);
                i[0].time();
                delete i;
        }
        else if(e=="Wizard")
        {
            cout<<"Enter the distance factor: ";
            int m;
            cin>>m;
            getchar();
            j=new Wizard(m);
            j[0].hover();
            delete j; 
        }
            else if(e=="Human")
        {
            cout<<"Enter time in seconds: ";
            int m;
            cin>>m;
            getchar();
            q=new Human(m);
            q[0].lightyears();
            delete q;
        }
    }
    delete w;
    return 0;
}