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
    arr[i]/5;
}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    float *a=(float*)malloc(sizeof(float)*n);
    for(i=0;i<n;i++);
    {
        scanf("%f",&a[i]);
    }
    printf("\nAfter:\n");
    divby5(a,n);
    for(i=0; i<n; i++)
    {
        printf("%.3f ",a[i]);
    }
    printf("\n");
 
    free(a);
    return 0;
}
