/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float geometric_mean(float arr[],int num)
{
    float n=1;
    for(int b=0;b<num;b++)
    {
        n*=arr[b];
    }
    return pow(n,1.0/(float)num);
}
float max_number(float arr[],int num)
{
    float e=arr[0];
    for(int b=1;b<num;b++)
    {
        if (arr[b]>e)
        {
            e=arr[b];
        }
    }
    return e;
}
float min_number(float arr[],int num)
{
    float e=arr[0];
    for(int b=1;b<num;b++)
    {
        if (arr[b]<e)
        {
            e=arr[b];
        }
    }
    return e;
}
float sum_number(float arr[],int num)
{
    float e=0;
    for(int b=0;b<num;b++)
    {
        e+=arr[b];
    }
    return e;
}
int main()
{
    float a[15];
    int x=0;
    while (1)
    {
        float b;
        scanf("%f", &b);
        getchar();
        if(b<0)
        {
            break;
        }
        a[x]=b;
        x++;
        if(x>=15)
        {
            break;
        }
    }
    char m;
    m=getchar();
    getchar();
    switch (m)
    {
    case 'm':
        printf("%f\n", geometric_mean(a,x));
        break;
    case 'h' :
        printf("%f\n", max_number(a,x));
        break;
    case 'l' :
        printf("%f\n", min_number(a,x));
        break;
    case 's' :
        printf("%f\n", sum_number(a,x));
        break;
    default:
        printf("Undefined input character\n");
        break;
    }
    return 0;
}