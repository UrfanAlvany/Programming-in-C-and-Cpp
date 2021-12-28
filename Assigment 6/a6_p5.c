/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    unsigned char c;
    c = getchar();
 
 
    printf("The decimal representation is: %d\n",c);
    printf("The backwards binary representation is: ");
    while(c)
    {
        printf("%d", c&1);
        c = c >> 1;
    }
    printf("\n");
    return 0;
}
