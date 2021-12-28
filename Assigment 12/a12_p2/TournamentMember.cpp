#include <iostream>
#include <cstring>
#include "TournamentMember.h"
 
using namespace std;
 
string TournamentMember::location="Barcelona";
 
TournamentMember::TournamentMember()
{
    strcpy(this->name,"Tournament");
    strcpy(this->LastName,"Member");
    strcpy(this->Bday,"2000-12-19");
    this->role="TournamentMember";
    this->height=1.90;
    cout << "Created with TournamentMember empty constructor" << endl;
}
TournamentMember::TournamentMember(char * n, char * l, char * b, string r, double h)
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
    this->role=r;
    this->height=h;
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
    this->role=t.role;
    this->height=t.height;
    cout << "Created with TournamentMember copy constructor" << endl;
}
void TournamentMember::print()
{
    cout << this->role << "'s name is " << this->name << " " << this->LastName << "." << endl;
    cout << "Birthday: " << this->Bday << endl;
    cout << "Height: " << this->height << endl;
    cout << "Location: " << this->location << endl;
}
