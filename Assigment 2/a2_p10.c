/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() {
int n;
scanf("%d",&n);
while (n<=0)
{
    scanf("%d",&n);
}
int x =1;
printf("1 day=24 hours\n",x);
x++;
while (x<=n)
{
printf("%d days=%d hours\n",x,24*x);
x++;
}
return 0;
}
