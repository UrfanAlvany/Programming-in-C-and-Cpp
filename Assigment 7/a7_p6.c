/*
CH-230-A
a7 p6.c
Urfan Alvani
ualvani@jacobs-university.de
*/
 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
struct person
{
    char name[30];
    int age;
};
int sortName(struct person x, struct person y)
{
    if(!strcmp(x.name,y.name))
    {
        return x.age-y.age;
    }
    return strcmp(x.name,y.name);
}
int sortAge(struct person x, struct person y)
{
    if(x.age==y.age)
    {
        return strcmp(x.name,y.name);
    }
    return x.age-y.age;
}
 
void bubbleSort(struct person*a,int x, int(*sor)(struct person,struct person))
{
    bool swapped=true;
    while(swapped)
    {
        swapped=false;
        for(int i=1; i<x; i++)
        {
            if (sor(a[i-1],a[i])>0)
            {
                struct person temp=a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                swapped=true;
            }
        }
    }
}
 
void print_r(struct person *a, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("{%s, %d}; ", a[i].name, a[i].age);
    }
    printf("\n");
}
int main()
{
    int x;
    scanf("%d", &x);
    getchar();
    struct person a[x];
    for(int i=0; i<x; i++)
    {
        char name[30];
        int h;
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
        scanf("%d", &h);
        getchar();
        strcpy(a[i].name,name);
        a[i].age=h;
    }
    bubbleSort(a,x,sortName);
    print_r(a,x);
    bubbleSort(a,x,sortAge);
    print_r(a,x);
    return 0;
}
