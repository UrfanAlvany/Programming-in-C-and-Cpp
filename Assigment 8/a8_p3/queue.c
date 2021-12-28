#include <stdio.h>
#include <stdlib.h>
 
#include "queue.h"
 
//static void copy_to_node(Item item, Node *pn);
//static void copy_to_item(Node *pn, Item *pi);
 
void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}
 
int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}
 
int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}
 
int queue_item_count(const Queue *pq)
{
    return pq->items;
}
 
int enqueue(Item item, Queue *pq)
{
    Node *neww;
    neww=malloc(sizeof(struct node));
    if(neww==NULL)
    {
        return -1;
    }
    else if(pq->items<MAXQUEUE)
    {
        neww->item=item;
        neww->next=NULL;
        if(pq->items==0)
        {
            pq->front=neww;
        }
        else if(pq->items==1)
        {
            pq->front->next=neww;
            pq->rear=neww;
        }
        else
        {
            pq->rear->next=neww;
            pq->rear=neww;
        }
        pq->items++;
        return 0;
    }
    else
    {
        return -1;
    }
}
 
int dequeue(Item *pitem, Queue *pq)
{
    if(pq->items==0)
    {
        return -1;
    }
    else
    {
        Node *temp;
        temp=pq->front;
        *pitem=temp->item;
        pq->front=pq->front->next;
        free(temp);
        pq->items--;
    }
    return 0;
}
 
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
    {
        dequeue(&dummy, pq);
    }
}
 
void printq(Queue *pq)
{
    if(!queue_is_empty(pq))
    {
        Node *i;
        i=pq->front;
        printf("content of the queue: ");
        while(i!=pq->rear)
        {
            printf("%d ", i->item);
            i=i->next;
        }
        printf("%d \n", i->item);
    }
    else
    {
        printf("content of the queue: \n");
    }
}
