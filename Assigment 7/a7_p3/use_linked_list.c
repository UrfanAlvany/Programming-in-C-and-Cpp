/*
CH-230-A
a7 p2.c
Urfan Alvani
ualvani@jacobs-university.de
*/
 
 
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
 
int main ()
{
    struct node *my_list;
    my_list=NULL;
    while(1)
    {
        char c;
        int n;
        c=getchar();
        getchar();
        switch(c)
        {
        case 'a':
            scanf("%d",&n);
            getchar();
            my_list=push_back(my_list,n);
            break;
        case 'b':
            scanf("%d",&n);
            getchar();
            my_list=push_front(my_list,n);
            break;
        case 'p':
            print_node(my_list);
            break;
        case 'q':
            dispose_list(my_list);
            return 0;
        case 'r':
            my_list=pop(my_list);
            break;
        }
    }
    return 0;
}
