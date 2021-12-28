/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() 
{
    float a,b=0;
    int n=0;
    while (1)
    {
        scanf("%f",&a);
    
    if (a==-99.0)
    {
        break;
    }
    b+=a;
    n++;
 
    if (n>=10)
    {
        break;
    }
    
}
printf("sum=%f\naverage=%f\n",b,b/n);
return 0;
 
    
    
    
}
