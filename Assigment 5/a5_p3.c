/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
int count_lower(char* str)
{
    int length=strlen(str);
    int counter=0,i=0;
 
    while(i < length)
    {
        if((*str >='a') && (*str <='z'))
 
    {
        counter++;
    }
 
    i++;
    str++;
    }
 
return counter;
}
int main () {
 
char sentence[50];
while(1)
{
    fgets(sentence,sizeof(sentence),stdin);
    if(strlen(sentence)==1)
{
    break;
}
 
printf("Number of small letters:%d\n",count_lower(sentence));
 
}
return 0;
}
