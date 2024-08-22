#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    Stack *s = createStack();

    for (int i = 0; i < 10; i++)
    {
        int *value = malloc(sizeof(int));
        if(value == NULL)
            continue;
        
        *value = i;
        s = pushStack(s, value);
    }

    printf("There is %d elements in the stack.\n", lengthStack(s));

    printf("Elements : ");
    for (int i = 0; i < 10; i++)
    {
        int *value = topStack(s);
        printf("%d ", *value);
        free(value);
        value = NULL;
        s = popStack(s);
    }
    printf("\n");

    deleteStack(&s);
    return 0;
}