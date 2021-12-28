/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>

int main() {
float result; /* The result of the division */
int a = 5;
double b = 13.5; /*B had a decimal value but a type integer*/
result = a / b;
printf("The result is %lf\n", result); 
/*printf function we should put "%lf" to get "double" solution.
*/
return 0;
}
