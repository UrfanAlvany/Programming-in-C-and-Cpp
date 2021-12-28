/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
void printing(char ch,int n)
{
int i,a;
for ( i = n; i > 0; i--)
{
    for ( a = 0; a < i ; a++)
    {
       printf("%c",ch);
    }
  printf("\n");  
}
}
int main()
{
int q;
char ch;
scanf("%d %c",&q,&ch);
printing(ch,q);
return 0;
}
