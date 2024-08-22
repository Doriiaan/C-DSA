#ifndef __STACK_H__
#define __STACK_H__

/**
 * @author ALARY Dorian
 * @brief Stack implementation
 */

#include <stdbool.h>

typedef struct stack Stack;


/**
 * @brief The createStack() function create an empty stack.
 *
 * @return The empty stack.
 */
Stack *createStack(void);


/**
 * @brief The deleteStack() function delete the stack.
 *
 * @param[in] stack: Pointer to pointer to the stack.
 */
void deleteStack(Stack **stack);


/**
 * @brief The pushStack() function push the element at the top of the stack.
 *
 * @param[in] stack: The stack.
 * @param[in] elem: The element
 *
 * @return Return the modified stack.
 */
Stack *pushStack(Stack *stack, void *elem);


/**
 * @brief The topStack() function return the element at the top of the stack.
 *
 * @param[in] stack: The stack.
 *
 * @return The element at the top of the stack.
 */
void *topStack(Stack *stack);


/**
 * @brief The popStack() function delete the element at the top of the stack.
 *
 * @param[in] stack: The stack.
 *
 * @return The stack with the top element removed.
 */
Stack *popStack(Stack *stack);


/**
 * @brief The isEmptyStack() function return true if the stack is empty,
 *        false instead.
 *
 * @param[in] stack: The stack.
 *
 * @return Return true if the stack is empty, false instead.
 */
bool isEmptyStack(Stack *stack);


/**
 * @brief The lengthStack return the length of the stack.
 *
 * @param[in] stack: The stack.
 *
 * @return The length of the stack.
 */
unsigned int lengthStack(Stack *stack);

#endif // __STACK_H__