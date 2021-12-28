#include <iostream>
#include <cstdlib>
#include "Critter.h"
 
using namespace std;
 
int main(int argc, char** argv)
{
    Critter a;
 
    Critter b("Critter b");
 
    Critter c("Critter c", 13, 12);
 
    Critter d("Critter d", 15, 13, 11);
    
    Critter e("Critter e", 2, 8, 12, 0.2);
 
 
    a.setHunger(2);
    b.setHunger(2);
    c.setHunger(2);
    d.setHunger(2);
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
    return 0;
}
