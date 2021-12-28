#include <iostream>
#include "TournamentMember.h"
 
using namespace std;
 
int main()
{
    TournamentMember e;
    TournamentMember t(const_cast<char*>("Urfan"), const_cast<char*>("Alvani"), const_cast<char*>("2002-04-20"), "Player", 1.75);
    TournamentMember d(t);
    d.setName(const_cast<char*>("Shahin"));
    d.setBday(const_cast<char*>("2000-03-16"));
    d.setRole("Coach");
    TournamentMember::location="Bremen";
 
    e.print();
    t.print();
    d.print();
    return 0;
}