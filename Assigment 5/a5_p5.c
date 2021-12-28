/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double scalar(double v[],double w[],int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(v[i]*w[i]);
    }
    return sum;
 
}
 void smallest(double n[],int i)
 
    {
        double a;
        int b;
        a=n[0];
        b=0;
    for(int x=1;x<i;x++)
    {
        if(n[x]<a);
    {
 
 
    a=n[x];
    b=x;
 
    }
    }
    printf("The smallest=%f\n",a);
    printf("Position of smallest= %d\n",b);
    }
 
    void largest(double n[],int i)
{
    double a;
    int b;
    a=n[0];
    b=0;
    for(int x=1;x<i;x++)
    {
        if(n[x]>a)
        {
            a=n[x];
            b=x;
        }
    }
    printf("The largest = %lf\n",a);
    printf("Position of largest = %d\n",b);
}
int main()
{
    int n;
    scanf("%d",&n);
    double v[n],w[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&v[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&w[i]);
    }
    printf("Scalar product=%lf\n",scalar(v,w,n));
    smallest(v,n);
    largest(v,n);
    smallest(w,n);
    largest(w,n);
    return 0;
}
