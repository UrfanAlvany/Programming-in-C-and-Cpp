#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    unsigned int count;
    int array[12]; // Container
};
 
struct stack push(struct stack s, int n);
struct stack pop(struct stack s);
struct stack empty(struct stack s);
int isEmpty(struct stack s);