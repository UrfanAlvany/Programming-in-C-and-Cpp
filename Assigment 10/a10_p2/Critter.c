#include <iostream>
#include "Critter.h"
 
using namespace std;
 
void Critter::setName(string& newname) {
    name = newname;
}
 
void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}
void Critter::setPower(int newpower){
    power=newpower; 
}
void Critter::setStamina(int newstamina)
{
stamina=newstamina;
}
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << "." <<"and my stamina level is "<<stamina<<"and power level is"<<power<<"."<< endl;
}
 
int Critter::getHunger() {
    return hunger;
}
int Critter::getPower(){
return power;
}
int Critter::getStamina(){
    return stamina;
}
