/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
int **reading(int x,int y)
{
    int **m=(int**)malloc(sizeof(int*)*x);
    for(int i=0;i<x;i++)
    {
        m[i]=(int*)malloc(sizeof(int)*y);
        for(int j=0;j<y;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    return m;
}
void printing(int **m,int x,int y)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
int **multiplication(int **m1, int **m2, int n, int m, int p)
{
    int **r=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        r[i]=(int*)malloc(sizeof(int)*p);
        for(int j=0;j<p;j++)
        {
            r[i][j]=0;
            for(int k=0;k<m;k++)
            {
                r[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    return r;
}
int main()
{
    int n,m,p;
    scanf("%d %d %d", &n, &m, &p);
    int **m1;
    int **m2;
    int **m3;
    m1=reading(n,m);
    m2=reading(m,p);
    m3=multiplication(m1,m2,n,m,p);
 
    printf("Matrix A:\n");
    printing(m1,n,m);
    printf("Matrix B:\n");
    printing(m2,m,p);
    printf("The multiplication result AxB:\n");
    printing(m3,n,p);
    for(int i=0;i<n;i++)
    {
        free(m1[i]);
    }
    free(m1);
    for(int i=0;i<m;i++)
    {
        free(m2[i]);
    }
    free(m2);
    for(int i=0;i<n;i++)
    {
        free(m3[i]);
    }
    free(m3);
    return 0;
}
