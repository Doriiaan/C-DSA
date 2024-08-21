/**
 * @author ALARY Dorian
 * @brief Implementation of Queue
 */

#include "queue.h"

#include <stdlib.h>

typedef struct cell
{
    // Next cell of the Queue
    struct cell *next;

    // Elem of the cell
    void *elem;
} Cell;

struct queue 
{
    // First cell of the queue.
    Cell *head;

    // Last cell of the queue;
    Cell *tail;

    // Length of Queue
    unsigned int length;
};


Queue *createQueue(void)
{
    Queue *queue = malloc(sizeof(Queue));
    if(queue == NULL)
        return NULL;
    
    queue->head = NULL;
    queue->tail = NULL;
    queue->length = 0;

    return queue;
}


void deleteQueue(Queue **queue)
{
    if(*queue == NULL)
        return;

    while(!isEmptyQueue(*queue))
    {
        popQueue(*queue);
    }

    free(*queue);
    *queue = NULL;
}


Queue *pushQueue(Queue *queue, void *elem)
{
    if(queue == NULL)
        return NULL;

    Cell *new = malloc(sizeof(Cell));
    if(new == NULL)
        return queue;
    
    new->elem = elem;

    if(!isEmptyQueue(queue))
        queue->tail->next = new;
    else
        queue->head = new;

    queue->tail = new;
    queue->length++;
    return queue;
}


Queue *popQueue(Queue *queue)
{
    if(queue == NULL || isEmptyQueue(queue))
        return queue;
    
    Cell *head = queue->head;
    queue->head = queue->head->next;
    free(head);
    queue->length--;

    return queue;
}


void *topQueue(Queue *queue)
{
    if(queue == NULL || isEmptyQueue(queue))
        return NULL; 

    return queue->head->elem;
}


bool isEmptyQueue(Queue *queue)
{
    return (queue == NULL || queue->head == NULL);
}


unsigned int lengthQueue(Queue *queue)
{
    return queue->length;
}