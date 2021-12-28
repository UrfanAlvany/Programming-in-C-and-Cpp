class Creature
{
    public:
        Creature();
        void run() const;
        ~Creature();
protected:
    int distance;
};
class Wizard:public Creature
{
public:
    Wizard(int);
    void hover() const;
    ~Wizard();
        private:
int distFactor;
 
};
class Animals :public Creature
{
public:
    Animals(int);
    void time()const;
    ~Animals();
        private:
    int speed;
};
class Human :public Creature
{
public:
    Human(int);
    void lightyears()const;
    ~Human();
private:
    int time;
};
