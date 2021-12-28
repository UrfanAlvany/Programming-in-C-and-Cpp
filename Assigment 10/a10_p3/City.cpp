#include <iostream>
#include "City.h"
 
using namespace std;
 
void City::setName(string &n)
{
    name=n;
}
void City::setInhabitans(int i)
{
    inhabitans=i;
}
void City::setMayor(string &m)
{
    mayor=m;
}
void City::setArea(double a)
{
    area=a;
}
string City::getName()
{
    return name;
}
int City::getInhabitans()
{
    return inhabitans;
}
string City::getMayor()
{
    return mayor;
}
double City::getArea()
{
    return area;
}
