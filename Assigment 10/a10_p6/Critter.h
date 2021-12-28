#include <string>
 
class Critter
{
private:
    std::string name;
    double hunger;
    int boredom;
    double height;
    double thirst;
 
public:
    Critter();
    Critter(std::string name);
    Critter(std::string name, int hunger, int boredom, double height=10);
    Critter(std::string name, int hunger, int boredom, double height,double thirst);
 
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    int getHunger();
    void print();
};