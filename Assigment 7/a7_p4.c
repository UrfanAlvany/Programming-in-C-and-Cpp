/*
CH-230-A
a7 p4.c
Urfan Alvani
ualvani@jacobs-university.de
*/
 
 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
void lower(char* a)
{
    int i=0;
    while(a[i])
    {
        printf("%c", tolower(a[i]));
        i++;
    }
}
void upper(char* a)
{
    int i=0;
    while(a[i])
    {
        printf("%c", toupper(a[i]));
        i++;
    }
}
void mid (char* a)
{
    int i=0;
    while(a[i])
    {
        if(islower(a[i]))
        {
            printf("%c", toupper(a[i]));
        }
        else if(isupper(a[i]))
        {
            printf("%c", tolower(a[i]));
        }
        else
        {
            printf("%c", a[i]);
        }
        i++;
    }
}
void finish (char*a)
{
    exit(0);
}
 
int main()
{
    char a[256];
    fgets(a,sizeof(a),stdin);
    int i;
    void (*func[4])(char*);
    func[0]=upper;
    func[1]=lower;
    func[2]=mid;
    func[3]=finish;
    while(1)
    {
        scanf("%d", &i);
        func[i-1](a);
    }
    return 0;
}
