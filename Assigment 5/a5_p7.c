/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    int n=strlen(a)+strlen(b)-2;
    char *x=(char*)malloc(sizeof(char)*n);
    a[strlen(a)-1]='\0';
    strcpy(x,a);
    strcat(x,b);
    printf("Result of concatenation: %s", x);
    free(x);
    return 0;
}
