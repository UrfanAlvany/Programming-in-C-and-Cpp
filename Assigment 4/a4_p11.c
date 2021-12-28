/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int count_insensitive(char *str,char c)
{
    int i,n=0;
    for(i=0; i<=sizeof(str); i++)
    {
        if((str[i]>='A' && str[i]<='Z' && str[i]==tolower(c)) || (str[i]>='a' && str[i]<='z' && str[i]==toupper(c)) || str[i]==c)
        {
            n++;
        }
    }
    return n;
}
int main()
{
    int n=50;
    char *line;
    line=(char*)malloc(sizeof(char)*n);
    if(line==NULL)
        exit(1);
    fgets(line,sizeof(line),stdin);
    n=strlen(line);
    char* newline = (char*)malloc(sizeof(char)*n);
    strcpy(newline,line);
    free(line);
    printf("The character 'b' occurs %d times.\n", count_insensitive(newline,'b'));
    printf("The character 'H' occurs %d times.\n", count_insensitive(newline,'H'));
    printf("The character '8' occurs %d times.\n", count_insensitive(newline,'8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(newline,'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(newline,'$'));
    free(newline);
    return 0;
}
