/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
float to_pounds(int kg, int g)
{
     float pounds=(float)kg*2.2;
     pounds+=(float)g*2.2/1000;
     return pounds;
}
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Result of Conversion:%f\n",to_pounds(a,b));
return 0;
    }