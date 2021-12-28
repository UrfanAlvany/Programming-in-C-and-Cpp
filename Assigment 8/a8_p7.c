#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE * f;
    f=fopen("text1.txt","r");
    if(f==NULL)
    {
        printf("Couldn't open file\n");
        exit(1);
    }
    FILE *x;
    x=fopen("merge12.txt","w");
    if(x==NULL)
    {
        printf("Couldn't open file\n");
        exit(1);
    }
    char c;
    c=getc(f);
    while(c!=EOF)
    {
        putc(c,x);
        c=getc(f);
    }
    putc('\n',x);
    fclose(f);
    f=fopen("text2.txt","r");
    if(f==NULL)
    {
        printf("Couldn't open file\n");
        exit(1);
    }
    c=getc(f);
    while(c!=EOF)
    {
        putc(c,x);
        c=getc(f);
    }
    fclose(f);
    fclose(x);
    return 0;
}
