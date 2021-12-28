/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
int ***reading(int x, int y, int z)
{
    //allocating for rows
    int ***m=(int***)malloc(sizeof(int**)*x);
    for(int i=0;i<x;i++)
    {
        //allocating for columns
        m[i]=(int**)malloc(sizeof(int*)*y);
        for(int j=0;j<y;j++)
        {
            //allocating for depth
            m[i][j]=(int*)malloc(sizeof(int)*z);
            for(int k=0;k<z;k++)
            {
                //entering the number
                scanf("%d", &m[i][j][k]);
            }
        }
    }
    return m;
}
 
void printing(int ***m, int x, int y, int z)
{
    for(int i=0;i<z;i++)
    {
        //going by depth
        printf("Section %d:\n", i+1);
        for(int j=0;j<x;j++)
        {
            //going by rows
            for(int k=0;k<y;k++)
            {
                //going by columns
                printf("%d ", m[j][k][i]);
            }
            printf("\n");
        }
    }
}
 
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
 
    int ***m;
    m=reading(x,y,z);
    printing(m,x,y,z);
 
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            free(m[i][j]);
        }
        free(m[i]);
    }
    free(m);
 
    return 0;
}
