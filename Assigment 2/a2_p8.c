/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() 
{
 
 int b;
 scanf("%d",&b);
  if ((b%2==0) && (b%7==0))
  {
     printf("The number is divisible by 2 and 7\n");
  }
  else
  {
printf("The number is NOT divisible by 2 and 7\n"); 
  }
  return 0;
}