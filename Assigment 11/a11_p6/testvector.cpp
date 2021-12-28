#include <iostream>
#include "Vector.h"
 
using namespace std;
 
int main()
{
    cout<<"Insert n: ";
    int n;
    cin>>n;
    Vector v1,v2;
    cout<<"Enter the first vector:"<<endl;
    double *arr;
    arr=new double[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    v1.setN(n);
    v2.setN(n);
    v1.setSize(arr);
    delete []arr;
    cout<<endl<<"Enter the second vector:"<<endl;
    double *arrv2;
    arrv2=new double[n];
    for(int i=0; i<n; i++)
    {
        cin>>arrv2[i];
    }
    v2.setSize(arrv2);
    delete []arrv2;
    cout<<"The addition of the two vectors creates this vector:"<<endl;
    (v1.add(v2)).print();
    cout<<endl<<"Norm of the first vector:"<<endl;
    cout<<v1.norm()<<endl;
    cout<<endl<<"The subtraction of the two vectors creates this vector:"<<endl;
    (v1.diff(v2)).print();
    cout<<endl<<"The scalar product of the two vectors is:"<<endl;
    cout<<v1.pro(v2)<<endl;
    return 0;
}