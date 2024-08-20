#include "stack.h"
#include <stdlib.h>

struct stack 
{
    // next elem
    struct stack * next;

    // data of any type
    void * elem;
};

/**
 * @brief The EmptyStack() function create an empty stack.
 * 
 * @return The empty stack.
 */
Stack *EmptyStack()
{
    return NULL;
}


/**
 * @brief The push() function push the element at the top of the stack. 
 * 
 * @param[in,out] stack: The stack.
 * @param[in] elem: The element
 * 
 * @return Return the modified stack. The stack pointer is the same as the 
 *         stack parameter.
 */
Stack *push(Stack *stack, void *elem)
{
   Stack *new = (Stack *) malloc(sizeof(Stack));
   if (new == NULL)
        return stack;

    new->elem = elem;
    new->next = stack;
    return new;
}


/**
 * @brief The top() function return the element at the top of the stack. 
 * 
 * @param[in] stack: The stack.
 * 
 * @return The element at the top of the stack.
 */
void *top(Stack *stack)
{
    if(isEmpty(stack))
        return NULL;

    return stack->elem;
}


/**
 * @brief The pop() function delete the element at the top of the stack.
 *  
 * @param[in] stack: The stack.
 * 
 * @return The stack with the top element removed.
 */
Stack *pop(Stack **stack)
{
    if(isEmpty(*stack))
        return *stack;

    Stack *tmp = *stack;
    *stack = (*stack)->next;
    free(tmp);
    return *stack;
}

/**
 * @brief The isEmpty() function return true if the stack is empty, 
 *        false instead.
 * 
 * @param[in] stack: The stack.
 * 
 * @return Return true if the stack is empty, false instead.
 */
bool isEmpty(Stack *stack)
{
    return stack == NULL;
}