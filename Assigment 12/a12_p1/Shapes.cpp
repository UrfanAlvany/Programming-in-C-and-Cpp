#include <iostream>
#include <cmath>
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
}
 
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, int np, const string& c) :
    RegularPolygon(n,nx,ny,nl)
{
    color = c;
    t = np;
}
 
void Hexagon::setSide(int newt){
    t = newt;
}
 
void Hexagon::setColor(const string& newColor){
    color = newColor;
}
 
int Hexagon::getSide(){
    return t;
}
 
std::string Hexagon::getColor(){
    return color;
}
 
double Hexagon::perimeter(){
    return t*6;
}
 
double Hexagon::area(){
    return (3*t*t*sqrt(3))/2;
}
