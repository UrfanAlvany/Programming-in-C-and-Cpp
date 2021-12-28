/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() {
char c;
getchar();
int n;
scanf("%d",&n);
scanf("%c",&c);
double temps[100],sum=0;
for (int i=0;  i<n; i++)
{
scanf("%lf",&temps[i]);
switch (c)
{
    case 's':
        for(int i = 0; i<n; i++)
        {
            sum += temps[i];
        }
        printf("Sum of all temperatures: %lf\n", sum);
    break;
    
    case 'p':
        for(int i = 0; i<n; i++)
        {
            printf("%lf\n", temps[i]);
        }
    break;
    
    case 't':
        for(int i = 0; i<n; i++)
        {
            printf("%lf\n", temps[i]*(9/5)+32);
        }
    break;
    default:
        for(int i = 0; i<n; i++)
        {
            sum += temps[i];
 
        }
        printf("%lf\n", sum/n);
    break;
    return 0;
    }
}