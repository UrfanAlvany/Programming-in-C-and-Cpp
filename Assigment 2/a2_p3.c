/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h> 
int main() {
 
int week,day,hours;
printf("week:");
scanf("%d", &week);
printf("day:");
scanf("%d", &day);
printf("hours:");
scanf("%d", &hours);
printf("total number of hours:%d\n",week*168+day*24+hours);
 
return 0 ;
}