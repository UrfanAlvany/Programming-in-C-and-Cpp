/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
int n;
void print_matrix(int a[n][n]) 
{
    printf("The entered matrix is:\n");
    for ( int i = 0; i < n; i++)
    {
        for (int b = 0; b < n; b++)
        {
            printf("%d",a[i][b]);
        }
        printf("\n");
    }
}
void print_diagonal(int a[n][n])
 {
 printf("Under main of diagonal:\n");
 for (int i = 0; i < n; i++)
 {
  for (int b = 0; b < n; b++)
 {
 if (b<i)
 {
    printf("%d",a[i][b]);
 }
 }
 }
    
    printf("\n");
    }
    int main()
    {
 scanf("%d",&n);
 int a[n][n];
    for (int i=0;i<n;i++)
    {
        for(int b=0;b<n;b++)
        {
            scanf("%d",&a[i][b]);
        }
    }
    print_matrix(a);
    print_diagonal(a);
    return 0;
}
