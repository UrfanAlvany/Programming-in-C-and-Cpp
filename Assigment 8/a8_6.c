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
    double c;
    fscanf(f,"%lf", &c);
    fclose(f);
 
    fgets(file_name,sizeof(file_name),stdin);
    file_name[strlen(file_name)-1]='\0';
    f=fopen(file_name,"r");
    if(f==NULL)
    {
        printf("Couldn't open file\n");
        exit(1);
    }
    double i;
    fscanf(f,"%lf", &i);
    fclose(f);
 
    f=fopen("results.txt","w");
    fprintf(f, "%lf\n",c+i);
    fprintf(f, "%lf\n",c-i);
    fprintf(f, "%lf\n",c*i);
    fprintf(f, "%lf\n",c/i);
    fclose(f);
 
    return 0;
}