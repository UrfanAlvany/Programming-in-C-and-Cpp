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
    printf("The binary representation is: ");
    for(unsigned i=1<<7;i>0;i/=2)
    {
        (c&i)? printf("1"):printf("0");
    }
    printf("\n");
    return 0;
}
