/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() {
float x;
int n;
scanf("%f",&x);
getchar();
scanf("%d",&n);
getchar();
while (n<=0)
{
    printf("Input is invalid, reenter value\n");
    scanf("%d",&n);
    getchar();  
}
while (n>0)
{
    printf("%f\n",x);
    n--;
}
return 0;
}
