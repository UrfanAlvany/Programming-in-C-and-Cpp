/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 int prodminmax (int arr[], int n)
{
    int min, max, i;
    min=arr[0];
    max=arr[0];
    for(i=0; i<n; i++){
        if (min>arr[i]){
            min=arr[i];
        }
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max*min;
}
int main()
{
    int *arr, n;
    scanf("%d", &n);
    arr=(int*) malloc(sizeof(int)*n);
    int ct;
    for (ct=0; ct<n; ct++){
        scanf("%d", &arr[ct]);
    }
    printf("The product of min and max is %d\n", prodminmax(arr,n));
    return 0;
}
