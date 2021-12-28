/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <math.h>
int main() {
   float x,s,d;
   scanf("%f %f %f",&x,&s,&d);
   for (x;x<=s; x=x+d)
   {
      printf("%f %f %f\n",x, 3.14*x*x,2*3.14*x);
   }
   return 0;
}