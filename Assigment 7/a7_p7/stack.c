/*
CH-230-A
a7 p7.c
Urfan Alvani
ualvani@jacobs-university.de
*/
 
 
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
 
struct stack push(struct stack s, int n)
{
    if(s.count>11)
    {
        printf("Pushing Stack Overflow\n");
        return s;
    }
    s.array[s.count]=n;
    s.count++;
    printf("Pushing %d\n", n);
    return s;
}
struct stack pop(struct stack s)
{
    if(isEmpty(s))
    {
        printf("Popping Stack Underflow\n");
        return s;
    }
    s.count--;
    printf("Popping %d\n",s.array[s.count]);
    return s;
}
struct stack empty(struct stack s)
{
    if(isEmpty(s))
    {
        printf("Emptying Stack Underflow\n");
        return s;
    }
    printf("Emptying Stack ");
    while(s.count>0)
    {
        printf("%d ",s.array[s.count-1]);
        s.count--;
    }
    printf("\n");
    return s;
}
int isEmpty(struct stack s)
{
    return s.count==0;
}
