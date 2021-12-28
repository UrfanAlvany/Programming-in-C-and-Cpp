/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
void max(int arr[],int n)
{
int m1,m2;
if (arr[0]<arr[1])
{
    m1=arr[0];
    m2=arr[1];
}
else
{
    m1=arr[1];
    m2=arr[0];
}
for (int x=2; x < n; x++)
{
    if (arr[x]>m2)
    {
        m1=m2;
        m2=arr[x];
    }
    else if (arr[x]<=m2 && arr[x]>m1)
    {
       m1=arr[x];
    }
    
}
 
printf("The first largest is %d\n", m2);
printf("The second largest is %d\n", m1);
 
}
 int main() {
 int n;
    scanf("%d",&n);
    int *o;
    o=(int *) malloc(sizeof(int)*n);
    for(int x=0;x<n;x++)
    {
        scanf("%d",&o[x]);
    }
    max(o,n);
    free(o);
    return 0;
}
