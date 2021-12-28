#include <iostream>
#include "Shapes.h"
 
using namespace std;
 
Shape::Shape(const string& n) : name(n) {
}
 
void Shape::printName() const {
    cout << name << endl;
}
 
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
 
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}
 
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
    perimeterr = 3.14*2*r;
    arear = 3.14*r*r;
}
 
void Circle::printArear() const{
    cout<<"Perimeter of circle is "<<perimeterr<<endl;
    cout<<"Area of circle is "<<arear<<endl;
}
 
Rectangle:: Rectangle(const string& n, double nx, double ny, int nl, double nwidth,
double nheight) : RegularPolygon(n, nx, ny, nl)
{
    width = nwidth;
    height = nheight;
    perimeter = 2*(nwidth+nheight);
    area = nwidth*nheight;
}
void Rectangle::printArea() const {
    cout<<"Perimeter of rectangle is "<<perimeter<<endl;
    cout<<"Area of rectangle is "<<area<<endl;
}
 
Square::Square(const string& n, double nx, double ny, int nl, double nwidth,
double nheight, double nside):Rectangle(n, nx, ny, nl, nwidth, nheight)
{
    side = nside;
    perimeters = 4*nside;
    areas = nside*nside;
}
void Square::printAreas() const {
    cout<<"Perimeter of square is "<<perimeters<<endl;
    cout<<"Area of square is "<<areas<<endl;
}
