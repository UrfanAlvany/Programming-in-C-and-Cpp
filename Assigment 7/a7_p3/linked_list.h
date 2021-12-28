#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *next;
};
 
struct node* push_front(struct node *my_list, int value);
 
struct node* push_back(struct node *my_list, int value);
 
void dispose_list(struct node *my_list);
 
void print_node(struct node *my_list);
 
struct node *pop(struct node* my_list);