/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
#define MIN(x,y)  (((x)<(y)) ? (x) : (y))
#define MAX(x,y)  (((x)>(y)) ? (x) : (y))
#define MIDRANGE(a,b,c) ((double)(MIN(MIN(a,b),c))+(double)(MAX(MAX(a,b),c)))/2
 
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("The mid-range is: %.6lf\n", MIDRANGE(a,b,c));
    return 0;
}
