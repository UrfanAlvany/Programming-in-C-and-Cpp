/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() {
 
double x,y;
scanf("%lf",&x);
getchar();
scanf("%lf",&y);
getchar();
double *ptr_one=&x;
double *ptr_two=&x;
double *ptr_three=&y;
printf("ptr_one=%p\n",ptr_one);
printf("ptr_two=%p\n",ptr_two);
printf("ptr_three=%p\n",ptr_three);
 
return 0;
}