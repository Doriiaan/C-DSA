#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Stack *s = EmptyStack();

    for (int i = 0; i < 10; i++)
    {
        int *value = malloc(sizeof(int));
        if(value == NULL)
            continue;
        
        *value = i;
        s = push(s, value);
    }





    for (int i = 0; i < 10; i++)
    {
        int *value = top(s);
        printf("%d\n", *value);
        free(value);
        value = NULL;
        s = pop(&s);
    }
}