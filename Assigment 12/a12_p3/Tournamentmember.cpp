#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;
 
string TournamentMember::location;
 
TournamentMember::TournamentMember()
{
    strcpy(this->name,"Tournament");
    strcpy(this->LastName,"Member");
    strcpy(this->Bday,"2000-12-19");
    cout << "Created with TournamentMember empty constructor" << endl;
}
TournamentMember::TournamentMember(char * n, char * l, char * b)
{
    for(int i=0; i<35; i++)
    {
        this->name[i]=n[i];
        this->LastName[i]=l[i];
        if(i<11)
        {
            this->Bday[i]=b[i];
        }
    }
    cout << "Created with TournamentMember parametric constructor" << endl;
}
TournamentMember::~TournamentMember()
{
    cout << "Destroying TournamentMember object" << endl;
}
TournamentMember::TournamentMember(const TournamentMember & t)
{
    for(int i=0; i<35; i++)
    {
        this->name[i]=t.name[i];
        this->LastName[i]=t.LastName[i];
        if(i<11)
        {
            this->Bday[i]=t.Bday[i];
        }
    }
    cout << "Created with TournamentMember copy constructor" << endl;
}
 
Player::Player() : TournamentMember()
{
    this->number=0;
    this->position="center";
    this->goals=0;
    this->foot="right-footed";
    cout << "Created with Player empty constructor" << endl;
}
Player::Player(char * n, char * l, char * b, int nu, string p, int g, string f) : TournamentMember(n, l, b)
{
    this->number=nu;
    this->position=p;
    this->goals=g;
    this->foot=f;
    cout << "Created with Player parametric constructor" << endl;
}
Player::~Player()
{
    cout << "Destroying Player object" << endl;
}
Player::Player(const Player & t)
{
    for(int i=0; i<35; i++)
    {
        this->name[i]=t.name[i];
        this->LastName[i]=t.LastName[i];
        if(i<11)
        {
            this->Bday[i]=t.Bday[i];
        }
    }
    this->number=t.number;
    this->position=t.position;
    this->goals=t.goals;
    this->foot=t.foot;
    cout << "created with Player copy constructor" << endl;
}
 
void Player::print()
{
    cout << "Player's name is " << this->name << " " << this->LastName << "." << endl;
    cout << "Birthday: " << this->Bday << endl;
    cout << "Location: " << this->location << endl;
    cout << "Number: " << this->number << endl;
    cout << "Position: " << this->position << endl;
    cout << "Goals: " << this->goals << endl;
    cout << "Footed: " << this->foot << endl;
}
