/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
float product(float a, float b)
{
    return a*b;
}
void productbyref(float a, float b, float *p)
{
    *p=a*b;
}
void modifybyref(float *a, float *b)
{
    *a+=3;
    *b+=11;
}
 
int main()
{
    float a,b,c;
    scanf("%f %f",&a, &b);
    printf("normal product %f\n", product(a,b));
    productbyref(a,b,&c);
    printf("product by reference %f\n",c);
    printf("a=%f b=%f\n",a,b);
    modifybyref(&a,&b);
    printf("After calling modifybyref\n");
    printf("a=%f b=%f\n",a,b);
    return 0;
}
