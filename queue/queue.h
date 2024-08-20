#ifndef __QUEUE_H__
#define __QUEUE_H__

/**
 * @author ALARY Dorian
 * @brief Queue implementation.
 */

#include <stdbool.h>

typedef struct queue Queue;

/**
 * @brief The EmptyStack() function create an empty stack.
 * 
 * @return The empty stack.
 */
Queue *EmptyQueue(void);


/**
 * @brief The push() function push the element at the top of the stack. 
 * 
 * @param[in,out] stack: The stack.
 * @param[in] elem: The element
 * 
 * @return Return the modified stack. The stack pointer is the same as the 
 *         stack parameter.
 */
Queue *push(Queue *q, void *elem);

void *pop(Queue *q);

void *top(Queue *q);

Queue isEmpty(Queue *q);

#endif // __QUEUE_H__