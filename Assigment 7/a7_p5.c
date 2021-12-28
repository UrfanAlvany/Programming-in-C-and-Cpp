/*
CH-230-A
a7 p5.c
Urfan Alvani
ualvani@jacobs-university.de
*/
 
 
#include <stdio.h>
#include <stdlib.h>
 
int asc(const void*a, const void*b)
{
    return( *(int*)a - *(int*)b );
}
int des(const void*a, const void*b)
{
    return( *(int*)b - *(int*)a );
}
void print_r(int*a,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int niza[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &niza[i]);
        getchar();
    }
    char t;
    while(1)
    {
        t=getchar();
        getchar();
        if(t=='a')
        {
            qsort(niza,n,sizeof(int),asc);
            print_r(niza,n);
        }
        else if (t=='d')
        {
            qsort(niza,n,sizeof(int),des);
            print_r(niza,n);
        }
        else
        {
            break;
        }
    }
    return 0;
}
