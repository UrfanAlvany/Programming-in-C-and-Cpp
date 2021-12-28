/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
 
int main() {
    double a,b ; 
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("sum of doubles=%lf\n",a+b);
    printf("difference of doubles=%lf\n",a-b);
    printf("square=%lf\n",a*a);
    
    int k,l;
    scanf("%d",&k);
    scanf("%d",&l);
    printf("sum of integers=%d\n",k+l);
    printf("product of integers=%d\n",k*l);
   
    char n,m;
   getchar();
    scanf("%c",&n);
    getchar();
    scanf("%c",&m);
    printf("sum of chars=%c\n",m+n);
    printf("product of chars=%c\n",m*n);
    printf("sum of chars=%d\n",m+n);
    printf("product of chars=%d\n",m*n);
return 0;
}