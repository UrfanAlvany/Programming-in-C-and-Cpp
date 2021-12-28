/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void replaceAll(char *str, char c, char e)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==c)
        {
            str[i]=e;
        }
    }
    printf("%s",str);
}
int main()
{
    char line1[80],line2[80],c,e;
    while(1)
    {
        fgets(line1,sizeof(line1),stdin);
        if(strcmp(line1,"stop\n")==0)
        {
            break;
        }
        fgets(line2,sizeof(line2),stdin);
        sscanf(line2, "%c %c", &c,&e);
        replaceAll(line1,c,e);
    }
    return 0;
}
