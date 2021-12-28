/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
int main() {
 char LowerCase;
 int n;
 scanf("%c",&LowerCase);
 scanf("%d",&n);
 if (LowerCase>='A' && LowerCase <='Z')
 {
     printf("You must use lowercase characters!");
 }
 for (int i = 0; i < n; i++)
 {if (i==0)
     printf("%c\n",LowerCase);
     else
     {
         printf("%c\n",LowerCase,i);
     }
     return 0;
     
 }
}
