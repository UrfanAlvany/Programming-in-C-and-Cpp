/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main () {
 
int a;
scanf("%d",&a);
int *ptr_a;
ptr_a= &a;
printf("adress:%p\n",ptr_a);
*ptr_a=*ptr_a +5;
printf("modified value:%d\n",*ptr_a);
printf("modified adress:%p\n",ptr_a);
 
return 0;
}
