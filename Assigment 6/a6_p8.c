/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *next;
};
 
struct node* push_front ( struct node * my_list, int value )
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
    return newel;
}
 
struct node* push_back ( struct node * my_list, int value )
{
    struct node * cursor, * newel ;
    cursor = my_list ;
    newel = ( struct node *) malloc ( sizeof ( struct node ));
    if ( newel == NULL )
    {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel->info=value;
    newel->next=NULL;
 
 
    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
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
 
void print_node ( struct node * my_list )
{
    struct node * p ;
    for ( p = my_list ; p ; p=p->next )
    {
        printf ("%d ", p->info ) ;
    }
    printf("\n");
}
 
struct node *pop(struct node* my_list)
{
    if(my_list!=NULL)
    {
        struct node *po=my_list->next;
        free(my_list);
        return po;
    }
    return my_list;
}
 
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
