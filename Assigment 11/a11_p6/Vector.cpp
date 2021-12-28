#include <iostream>
#include <cmath>
#include "Vector.h"
 
using namespace std;
 
Vector::Vector() {}
 
void Vector::setN(int n)
{
    num=n;
}
 
Vector::Vector(double *x)
{
    vsize=new double[num];
    for(int i=0; i<num; i++)
    {
        vsize[i]=x[i];
    }
}
 
Vector::Vector(const Vector& x)
{
    vsize=new double[num];
    for(int i=0; i<num; i++)
    {
        vsize[i]=x.vsize[i];
    }
}
 
Vector::~Vector()
{
    cout<<"Destroying a vector"<<endl;
    delete []vsize;
}
 
void Vector::print()
{
    for(int i=0; i<num; i++)
    {
        if(i==0)
        {
            cout<<"("<<vsize[i]<<", ";
        }
        else if(i==(num-1))
        {
            cout<<vsize[i]<<")"<<endl;
        }
        else
        {
            cout<<vsize[i]<<", ";
        }
    }
}
 
void Vector::setSize(double *x)
{
    vsize= new double[num];
    for(int i=0; i<num; i++)
    {
        vsize[i]=x[i];
    }
}
 
double Vector::getSize(int n)
{
    return vsize[n];
}
 
Vector Vector::add(const Vector &x)
{
    double *arr;
    arr=new double[num];
    for(int i=0; i<num; i++)
    {
        arr[i]=vsize[i]+x.vsize[i];
    }
    Vector b;
    b.num=num;
    b.setSize(arr);
    delete []arr;
    return b;
}
 
double Vector::norm()
{
    double s=0;
    for(int i=0; i<num; i++)
    {
        s+=vsize[i]*vsize[i];
    }
    s=sqrt(s);
    return s;
}
 
Vector Vector::diff(const Vector &x)
{
    double *arr;
    arr=new double[num];
    for(int i=0; i<num; i++)
    {
        arr[i]=vsize[i]-x.vsize[i];
    }
    Vector a;
    a.num=num;
    a.setSize(arr);
    delete []arr;
    return a;
}
 
double Vector::pro(const Vector &x)
{
    double s=0;
    for(int i=0; i<num; i++)
    {
        s+=vsize[i]*x.vsize[i];
    }
    return s;
}
