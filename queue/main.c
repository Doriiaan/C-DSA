#include "queue.h"
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    Queue *q = EmptyQueue();

    for (int i = 0; i < 100; i++)
    {
        int *new_int = malloc(sizeof(int));
        *new_int = i;
        q = push(q, new_int);
    }

    for (int i = 0; i < 100; i++)
    {
        if(!isEmpty(q))
        {
            printf("%d ", *(int*)top(q));
            q = pop(q);
        }
    }

    DeleteQueue(&q); 
    
    return 0;
}
