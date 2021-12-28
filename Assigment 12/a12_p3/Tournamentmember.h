using namespace std;
 
class TournamentMember
{
protected:
    char name[36];
    char LastName[36];
    char Bday[11];
public:
    TournamentMember();
    TournamentMember(char *, char *, char *);
    ~TournamentMember();
    TournamentMember(const TournamentMember &);
    static string location;
    void setName(char *);
    char * getName();
    void setLastName(char *);
    char * getLastName();
    void setBday(char *);
    char * getBday();
    void setlocation(string);
    string getlocation();
};
 
inline void TournamentMember::setName(char * n)
{
    for(int i=0; i<35; i++)
    {
        this->name[i]=n[i];
    }
}
 
inline char * TournamentMember::getName()
{
    return this->name;
}
 
inline void TournamentMember::setLastName(char * l)
{
    for(int i=0; i<35; i++)
    {
        this->LastName[i]=l[i];
    }
}
inline char * TournamentMember::getLastName()
{
    return this->LastName;
}
inline void TournamentMember::setBday(char * b)
{
    for(int i=0; i<11; i++)
    {
        this->Bday[i]=b[i];
    }
}
inline char * TournamentMember::getBday()
{
    return this->Bday;
}
inline void TournamentMember::setlocation(string s)
{
    location=s;
}
inline string TournamentMember::getlocation()
{
    return location;
}
 
class Player : public TournamentMember
{
protected:
    int number;
    string position;
    int goals;
    string foot;
public:
    Player();
    Player(char *, char *, char *, int, string,  int, string);
    ~Player();
    Player(const Player &);
    void setnumber(int);
    int getnumber();
    void setposition(string);
    string getposition();
    void setfoot(string);
    string getfoot();
    int getgoals();
    void score();
    void print();
};
 
inline void Player::setnumber(int n)
{
    this->number=n;
}
inline int Player::getnumber()
{
    return this->number;
}
inline void Player::setposition(string p)
{
    this->position=p;
}
inline string Player::getposition()
{
    return this->position;
}
inline  void Player::setfoot(string f)
{
    this->foot=f;
}
inline string Player::getfoot()
{
    return this->foot;
}
inline int Player::getgoals()
{
    return this->goals;
}
inline void Player::score()
{
    this->goals++;
}
