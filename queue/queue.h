#ifndef __QUEUE_H__
#define __QUEUE_H__

/**
 * @author ALARY Dorian
 * @brief Queue implementation.
 */

#include <stdbool.h>

typedef struct queue Queue;

/**
 * @brief The EmptyQueue() function create an empty queue.
 * 
 * @return The empty queue.
 */
Queue *EmptyQueue(void);


/**
 * @brief The DeleteQueue() function delete a queue.
 * 
 * @param[in] queue: The queue
 */
void DeleteQueue(Queue **queue);


/**
 * @brief The push() function push the element at the end of the queue. 
 * 
 * @param[in, out] queue: The queue
 * @param[in] elem: The element
 * 
 * @return Return the modified queue. The queue pointer is the same as the 
 *         queue parameter.
 */
Queue *push(Queue *queue, void *elem);


/**
 * @brief The pop() function delete the element at the begining of the 
 *        queue.
 * 
 * @param[in,out] queue: The queue
 * 
 * @return The modified queue. 
 */
Queue *pop(Queue *queue);


/**
 * @brief The top() function return the element at the begining of the
 *        queue.
 * 
 * @param[in] queue: The queue
 * 
 * @return The element at the begining of the queue.
 */
void *top(Queue *queue);


/**
 * @brief The isEmpty() function return true if the queue is empty, false
 *        instead.
 * 
 * @param[in] queue: The queue
 * 
 * @return true if the queue is empty, false instead.
 */
bool isEmpty(Queue *queue);

#endif // __QUEUE_H__