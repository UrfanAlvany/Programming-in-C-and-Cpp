/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
#define lsb(c,d) { d = c & 1; }
 
int main()
{
 
    unsigned char c;
    c = getchar();
 
 
    int d;
    lsb(c,d);
 
 
    printf("The decimal representation is: %d\n",c);
    printf("The least significant bit is: %d\n",d);
    return 0;
}
