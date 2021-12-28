/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_consonants(char str[])
{
int x=0;
for (char *p=&str[0];*p!='\0';p++)
{
 
 if (*p!='a' &&  *p!='i'  && *p!='d'  && *p!='o' && *p!='r' &&
 *p!='A' && *p!='I'     && *p!='D'  && *p!='O'   && *p!='R'&&
 
          ((*p>='A' && *p<='Z') || (*p>='a' && *p<='z')))   
 
 
 
  {
     p++;
  }
 
}
  
return x;
}
 
int main() 
 {
 
 char a[100];
 while (1)
 {
    fgets(a,sizeof(a),stdin);
    if(strlen(a)==1)
    {
        break;
    }
    printf("Number of consonants=%d\n",count_consonants(a));
    
}
return 0;
}
