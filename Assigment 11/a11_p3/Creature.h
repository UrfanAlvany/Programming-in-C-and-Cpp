class Creature
{
    public:
        Creature();
        void run() const;
protected:
    int distance;
};
class Wizard:public Creature
{
public:
    Wizard();
    void hover() const;
        private:
int distFactor;
 
};
class Animals :public Creature
{
public:
    Animals(int);
    void time()const;
        private:
    int speed;
};
class Human :public Creature
{
public:
    Human(int);
    void lightyears()const;
private:
    int time;
};
