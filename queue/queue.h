#ifndef __QUEUE_H__
#define __QUEUE_H__

/**
 * @author ALARY Dorian
 * @brief Queue implementation.
 */

#include <stdbool.h>

typedef struct queue Queue;

/**
 * @brief The createQueue() function create an empty queue.
 * 
 * @return The empty queue.
 */
Queue *createQueue(void);


/**
 * @brief The deleteQueue() function delete a queue.
 * 
 * @param[in] queue: The deleted queue.
 */
void deleteQueue(Queue **queue);


/**
 * @brief The pushQueue() function push the element at the end of the queue. 
 * 
 * @param[in, out] queue: The queue.
 * @param[in] elem: The element.
 * 
 * @return Return the modified queue.
 */
Queue *pushQueue(Queue *queue, void *elem);


/**
 * @brief The popQueue() function delete the element at the begining of the 
 *        queue.
 * 
 * @param[in,out] queue: The queue.
 * 
 * @return The modified queue. 
 */
Queue *popQueue(Queue *queue);


/**
 * @brief The topQueue() function return the element at the begining of the
 *        queue.
 * 
 * @param[in] queue: The queue.
 * 
 * @return The element at the begining of the queue.
 */
void *topQueue(Queue *queue);


/**
 * @brief The isEmptyQueue() function return true if the queue is empty, false
 *        instead.
 * 
 * @param[in] queue: The queue.
 * 
 * @return true if the queue is empty, false instead.
 */
bool isEmptyQueue(Queue *queue);


/**
 * @brief The lengthQueue() function the length of the queue.
 * 
 * @param[in] queue: The queue.
 * 
 * @return The length of the queue.
 */
unsigned int lengthQueue(Queue *queue);

#endif // __QUEUE_H__