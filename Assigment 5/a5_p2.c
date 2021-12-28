/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
void divby5(float arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        arr[i]/=5;
    }
}
int main()
{
    printf("Before:\n");
    int n=6,i;
    float array[6]= {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    for(i=0; i<n; i++)
    {
        printf("%.3f ",array[i]);
    }
    printf("\nAfter:\n");
    divby5(array,n);
    for(i=0; i<n; i++)
    {
        printf("%.3f ",array[i]);
    }
    printf("\n");
    return 0;
}
