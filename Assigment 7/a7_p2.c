/*
CH-230-A
a7 p2.c
Urfan Alvani
ualvani@jacobs-university.de
*/
 
 
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    char info;
    struct node *next;
    struct node *prev;
};
struct node* push_front(struct node *my_list, char value)
{
    struct node *newel;
    newel=(struct node *)malloc(sizeof(struct node));
    if(newel==NULL)
    {
        printf("Error allocating memory \n");
        return my_list;
    }
    newel->info=value;
    newel->next=my_list;
    newel->prev=NULL;
    if(my_list)
    {
        my_list->prev=newel;
    }
    return newel;
}
 
void dispose_list(struct node * my_list )
{
    struct node * nextelem ;
    while ( my_list != NULL )
    {
        nextelem = my_list->next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}
void print_list ( struct node * my_list )
{
    struct node * p ;
    for ( p = my_list ; p ; p=p->next )
    {
        printf ("%c ", p->info ) ;
    }
    printf("\n");
}
 
void print_b_list ( struct node * my_list )
{
    struct node *p=my_list ;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    for ( ; p ; p=p->prev )
    {
        printf ("%c ", p->info );
    }
    printf("\n");
}
 
struct node *del(struct node* my_list,char value)
{
    struct node *p=my_list;
    struct node *d, *e;
    while(1)
    {
        if (p->info==value)
        {
            d=p->prev;
            e=p->next;
            free (p);
            if(d)
            {
                d->next=e;
            }
            if(e)
            {
                e->prev=d;
                p=e;
            }
            else
            {
                p=d;
            }
        }
        else
        {
            if(p->next!=NULL)
            {
                p=p->next;
            }
            else
            {
                break;
            }
        }
    }
    while(p->prev!=NULL)
    {
        p=p->prev;
    }
    return p;
}
 
int main()
{
    struct node *my_list;
    my_list=NULL;
    int x;
    char c;
    while(1)
    {
        scanf("%d", &x);
        getchar();
        switch (x)
        {
        case 1:
            c=getchar();
            getchar();
            my_list=push_front(my_list,c);
            break;
        case 2:
            c=getchar();
            getchar();
            my_list=del(my_list,c);
            break;
        case 3:
            print_list(my_list);
            break;
        case 4:
            print_b_list(my_list);
            break;
        case 5:
            dispose_list(my_list);
            return 0;
        }
    }
 
 
    return 0;
}
