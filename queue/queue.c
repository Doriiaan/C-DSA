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
    Cell *first;

    // Last cell of the queue;
    Cell *last;
};


/**
 * @brief The EmptyQueue() function create an empty queue.
 * 
 * @return The empty queue.
 */
Queue *EmptyQueue(void)
{
    Queue *q = malloc(sizeof(Queue));
    if(q == NULL)
        return NULL;
    
    q->first = NULL;
    q->last = NULL;

    return q;
}


/**
 * @brief The DeleteQueue() function delete a queue.
 * 
 * @param[in] queue: The queue
 */
void DeleteQueue(Queue **queue)
{
    if(*queue == NULL)
        return;

    Cell *current = (*queue)->first;
    Cell *tmp = NULL;

    while(current)
    {
        tmp = current;
        current = current->next;
        free(tmp);
        tmp = NULL;
    }

    free(*queue);
    *queue = NULL;
}


/**
 * @brief The push() function push the element at the end of the queue. 
 * 
 * @param[in, out] queue: The queue
 * @param[in] elem: The element
 * 
 * @return Return the modified queue. The queue pointer is the same as the 
 *         queue parameter.
 */
Queue *push(Queue *queue, void *elem)
{
    if(queue == NULL)
        return NULL;

    Cell *new = malloc(sizeof(Cell));
    if(new == NULL)
        return queue;
    
    new->elem = elem;
    if(!isEmpty(queue))
        queue->last->next = new;
    else
        queue->first = new;
    queue->last = new;
    return queue;
}


/**
 * @brief The pop() function delete the element at the begining of the 
 *        queue.
 * 
 * @param[in,out] queue: The queue
 * 
 * @return The modified queue. 
 */
Queue *pop(Queue *queue)
{
    if(queue == NULL || isEmpty(queue))
        return queue;
    
    Cell *first = queue->first;
    queue->first = queue->first->next;
    free(first);
    return queue;
}


/**
 * @brief The top() function return the element at the begining of the
 *        queue.
 * 
 * @param[in] queue: The queue
 * 
 * @return The element at the begining of the queue.
 */
void *top(Queue *queue)
{
    if(queue == NULL || isEmpty(queue))
        return NULL; 

    return queue->first->elem;
}

/**
 * @brief The isEmpty() function return true if the queue is empty, false
 *        instead.
 * 
 * @param[in] queue: The queue
 * 
 * @return true if the queue is empty, false instead.
 */
bool isEmpty(Queue *queue)
{
    return (queue == NULL || queue->first == NULL);
}

