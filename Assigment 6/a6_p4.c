/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
#define INTERMEDIATE
 
int main()
{
    int a;
    int b=0;
    scanf("%d", &a);
    int x[a];
    int y[a];
    for(int c=0; c<a; c++)
    {
        scanf("%d", &x[c]);
    }
    for(int c=0; c<a; c++)
    {
        scanf("%d", &y[c]);
    }
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    #endif // INTERMEDIATE
    for(int c=0; c<a; c++)
    {
        #ifdef INTERMEDIATE
        printf("%d\n",x[c]*y[c]);
        #endif // INTERMEDIATE
        b+=x[c]*y[c];
    }
    printf("The scalar product is: %d\n", b);
    return 0;
}
