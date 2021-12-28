#include <iostream>
#include "City.h"
 
using namespace std;
 
int main()
{
    City c;
    string n,m;
    double a;
    int i;
    cout<<"Please enter the name of the city:"<<endl;
    getline(cin,n);
    c.setName(n);
    cout<<"How many inhabitans does that city have?"<<endl;
    cin>>i;
    c.setInhabitans(i);
    cout<<"Who is the mayor?"<<endl;
    cin>>m;
    c.setMayor(m);
    cout<<"How big is the city in km^2?"<<endl;
    cin>>a;
    c.setArea(a);
    cout<<"The name of the city is: "<<c.getName()<<"."<<endl;
    cout<<"It has "<<c.getInhabitans()<<" inhabitans."<<endl;
    cout<<"The mayor of this city is: "<<c.getMayor()<<"."<<endl;
    cout<<"And the area of this city is: "<<c.getArea()<<"km^2"<<endl;
    return 0;
}
