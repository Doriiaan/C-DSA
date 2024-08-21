#include "queue.h"
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    Queue *q = createQueue();

    for (int i = 0; i < 100; i++)
    {
        int *new_int = malloc(sizeof(int));
        *new_int = i;
        q = pushQueue(q, new_int);
    }

    printf("There is %d elements in the queue.\n", lengthQueue(q));

    printf("Elements : ");
    for (int i = 0; i < 100; i++)
    {
        if(!isEmptyQueue(q))
        {
            printf("%d ", *(int*)topQueue(q));
            q = popQueue(q);
        }
    }
    printf("\n");

    deleteQueue(&q); 
    
    return 0;
}
