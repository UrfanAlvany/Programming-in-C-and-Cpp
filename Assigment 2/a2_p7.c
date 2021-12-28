/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main()
{
int i = 8;
while (i >= 4)
{    /*there was a mistake since it was missing {} symbol */
    printf("i is %d\n", i);
i--;
}
printf("That’s it.\n");
return 0;
}
 
 