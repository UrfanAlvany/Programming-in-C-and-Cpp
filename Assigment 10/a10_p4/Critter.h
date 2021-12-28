#include <iostream>
using namespace std;
class critter{
private:
string name;
int hunger;
int boredom;
double height;
public:
critter();
critter(string name);
critter(string name,int hunger,int boredom,double height=10);
void setName(string &newname);
void setHunger(int newhunger);
void setboredom(int newboredom);
int getHunger();
void print();
 
 
 
 
};
