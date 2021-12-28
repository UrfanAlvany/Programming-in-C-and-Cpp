#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
 
int main ()
{
    struct stack s;
    s.count=0;
    char c;
    int n;
    while(1)
    {
        c=getchar();
        getchar();
        switch(c)
        {
        case 's':
            scanf("%d", &n);
            getchar();
            s=push(s,n);
            break;
        case 'p':
            s=pop(s);
            break;
        case 'e':
            s=empty(s);
            break;
        case 'q':
            printf("Quit\n");
            return 0;
        }
    }
    return 0;
}
