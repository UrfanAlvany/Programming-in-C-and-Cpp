/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
 
int main() {
    double result; /* The result of our calculation */
    // We have to cast to double since the compiler thinks of it as integer
    result = (double)(3 + 1) / 5;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}