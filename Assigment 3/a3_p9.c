/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
double sum25(double v[], int n)
{
    if (n<=5)
    {
        return -111;
    }
    else
    {
        return v[2]+v[5];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    double v[n];
    for (int i=0; i<n; i++)
    {
        scanf("%lf", &v[i]);
        getchar();
    }
    double x=sum25(v,n);
    if (x==-111)
    {
        printf("One or both positions are invalid\n");
    }
    else
    {
        printf("sum=%lf\n",x);
    }
    return -111;
}
