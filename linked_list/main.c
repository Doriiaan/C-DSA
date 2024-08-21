#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    List *list = NULL;
    int *new_int = NULL;

    list = createList();

    for(int i=0; i<10; i++)
    {
        new_int = (int *) malloc(sizeof(int));
        if(new_int == NULL)
            continue;

        *new_int = i;
        list = pushList(list, new_int);
    }
    
    printf("Element at the position -1 : %d\n", *(int *)atList(list, -1));

    printf("Element at the position length+2 : %d\n", 
           *(int *)atList(list, lengthList(list)));

    printf("Element at the position 0 : %d\n", *(int *)atList(list, 0));
    
    for (int i = 0; i < 10; i++)
    {
        int *tmp = atList(list, 0);
        popList(list);
        free(tmp);
    }
    
    deleteList(&list);

    return 0;
}
