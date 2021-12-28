using namespace std;
 
class TournamentMember
{
protected:
    char name[36];
    char LastName[36];
    char Bday[11];
    string role;
    double height;
public:
    TournamentMember();
    TournamentMember(char *, char *, char *, string, double);
    ~TournamentMember();
    TournamentMember(const TournamentMember &);
 
    static string location;
 
    void setName(char *);
    char * getName();
    void setLastName(char *);
    char * getLastName();
    void setBday(char *);
    char * getBday();
    void setRole(string);
    string getRole();
    void setHeight(double);
    double getHeight();
    void setlocation(string);
    string getlocation();
    void print();
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
inline void TournamentMember::setRole(string r)
{
    this->role=r;
}
inline string TournamentMember::getRole()
{
    return this->role;
}
inline void TournamentMember::setlocation(string s)
{
    location=s;
}
inline string TournamentMember::getlocation()
{
    return location;
}
inline void TournamentMember::setHeight(double h)
{
    this->height=h;
}
inline double TournamentMember::getHeight()
{
    return this->height;
}