#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
    critter a;
 
    critter b("Critter b");
 
    critter c("Critter c", 13, 12);
 
    critter d("Critter d", 15, 13, 11);
 
    a.setHunger(2);
    b.setHunger(2);
    c.setHunger(2);
    d.setHunger(2);
    a.print();
    b.print();
    c.print();
    d.print();
    return 0;
}
