/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include<stdio.h>


#define swap(type, a, b) {type temp; temp = a; a = b; b = temp;}

int main() {
    int x, y;
    double w, z;
    scanf("%d%d%lf%lf", &x, &y, &w, &z);

    // Call macro with integers and call macro with double
    swap(int, x, y);
    swap(double, w, z);

    // Print result after swapping using macro swap
    printf("After swapping:\n%d\n%d\n%.6f\n%.6f\n", x, y, w, z);

    return 0;
}