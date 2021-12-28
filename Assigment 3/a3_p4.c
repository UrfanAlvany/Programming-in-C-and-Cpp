/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
 
int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    /*The for loop wasn't running because there is missing brackets*/
    for (idx=0; str[idx] !=c && str[idx] != '\0'; ++idx)
    /* do nothing */
    {
    }
    return idx;
}
 
 
 
int main ()
{
    char line [80];
    while (1) 
    {
       printf("Enter string:\n");
        fgets(line,sizeof(line),stdin);
        printf("The First occurrence of 'g' is : %d\n",position(line,'g'));
    }
    }
