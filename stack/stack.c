/**
 * @author ALARY Dorian
 * @brief Implementation of Stack 
 */

#include "stack.h"

#include <stdlib.h>

typedef struct cell
{
    // Elem of the cell
    void *elem;

    // Next cell of the stack
    struct cell *below;

} Cell;

struct stack 
{
    // First cell of the stack
    Cell *top;

    // Length of the stack
    unsigned int length;
};


Stack *createStack(void)
{
    Stack *stack = malloc(sizeof(Stack));
    if(stack == NULL)
        return NULL;

    stack->length = 0;
    stack->top = NULL;

    return stack;
}


void deleteStack(Stack **stack)
{
    if(stack == NULL)
        return;
    
    while(!isEmptyStack(*stack))
        popStack(*stack);
    
    free(*stack);
    *stack = NULL;
}


Stack *pushStack(Stack *stack, void *elem)
{
    if(stack == NULL)
        return NULL;

   Cell *new = malloc(sizeof(Cell));
   if (new == NULL)
        return stack;

    new->elem = elem;
    new->below = stack->top;
    stack->top = new;
    stack->length++;

    return stack;
}


void *topStack(Stack *stack)
{
    if(stack == NULL || isEmptyStack(stack))
        return NULL;

    return stack->top->elem;
}


Stack *popStack(Stack *stack)
{
    if(stack == NULL ||isEmptyStack(stack))
        return stack;

    Cell *tmp = stack->top;
    stack->top = tmp->below;
    stack->length--;
    free(tmp);

    return stack;
}


bool isEmptyStack(Stack *stack)
{
    return (stack == NULL || lengthStack(stack) == 0);
}


unsigned int lengthStack(Stack *stack)
{
    if(stack == NULL)
        return 0;
    else
        return stack->length;
}