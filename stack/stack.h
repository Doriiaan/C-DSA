#ifndef __STACK_H__
#define __STACK_H__

/**
 * @author ALARY Dorian
 * @brief Stack implementation 
 */

#include <stdbool.h>

typedef struct stack Stack;


/**
 * @brief The EmptyStack() function create an empty stack.
 * 
 * @return The empty stack.
 */
Stack *EmptyStack();


/**
 * @brief The push() function push the element at the top of the stack. 
 * 
 * @param[in,out] stack: The stack.
 * @param[in] elem: The element
 * 
 * @return Return the modified stack. The stack pointer is the same as the 
 *         stack parameter.
 */
Stack *push(Stack *stack, void *elem);


/**
 * @brief The top() function return the element at the top of the stack. 
 * 
 * @param[in] stack: The stack.
 * 
 * @return The element at the top of the stack.
 */
void *top(Stack *stack);


/**
 * @brief The pop() function delete the element at the top of the stack.
 *  
 * @param[in] stack: The stack.
 * 
 * @return The stack with the top element removed.
 */
Stack *pop(Stack **stack);


/**
 * @brief The isEmpty() function return true if the stack is empty, 
 *        false instead.
 * 
 * @param[in] stack: The stack.
 * 
 * @return Return true if the stack is empty, false instead.
 */
bool isEmpty(Stack *stack);

#endif // __STACK_H__