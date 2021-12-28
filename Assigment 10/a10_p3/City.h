#include <string>
class City
{
private:
    std::string name;
    int inhabitans;
    std::string mayor;
    double area;
 
public:
    void setName(std::string &n);
    void setInhabitans(int i);
    void setMayor(std::string &m);
    void setArea(double a);
    std::string getName();
    int getInhabitans();
    std::string getMayor();
    double getArea();
};