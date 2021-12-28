#include <iostream>
#include "TournamentMember.h"
 
using namespace std;
 
int main()
{
    Player p;
    Player m(const_cast<char*>("Serxan"), const_cast<char*>("Hajiyev"), const_cast<char*>("2001-02-14"), 11, "center", 3, "left-footed");
    Player e(m);
 
    TournamentMember::location="Hamburg";
    e.score();
    e.score();
 
    p.print();
    m.print();
    e.print();
    return 0;
}
