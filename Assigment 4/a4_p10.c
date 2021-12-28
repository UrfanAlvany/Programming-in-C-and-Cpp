/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb)
{
*prod=a*b;
    *div=a/b;
    *pwr=pow(a,b);
    *invb=1/b;
 
}
int main()
{
    float x,y,prod,div,pwr,invb;
    scanf("%f %f",&x,&y);
    proddivpowinv(x, y, &prod, &div, &pwr, &invb);
    printf("The product: %f\nThe division: %f", prod, div);
    printf("The power: %f\nThe inverse: %f\n",pwr, invb);
    return 0;
}
