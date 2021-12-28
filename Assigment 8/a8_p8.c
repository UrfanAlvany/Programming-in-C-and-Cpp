#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main()
{
    char file_name[30];
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strlen(file_name)-1]='\0';
    FILE * f;
    f=fopen(file_name,"r");
    if(f==NULL)
    {
        printf("Couldn't open file\n");
        exit(1);
    }
    char c;
    int words=0;
    int check=0;
    c=fgetc(f);
    while(c!=EOF)
    {
        if(check==0 && ((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')))
        {
            check=1;
            words++;
        }
        else if(check==1 && (c==' ' || c==',' || c=='.' || c=='?' || c=='!' || c=='\t' || c=='\n' || c=='\r'))
        {
            check=0;
        }
 
        c=fgetc(f);
    }
    printf("The file contains %d words.\n", words);
    fclose(f);
    return 0;
}