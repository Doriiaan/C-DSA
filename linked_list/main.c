#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void *print_list(void *elem)
{
    printf("%d ", *(int *)elem);
    return elem;
}

void *multiply(void *elem)
{
    *(int *)elem *= * (int *)elem;
    return elem;
}

int main(void)
{
    List *list = NULL;
    int *new_int = NULL;

    list = EmptyList();

    for(int i=0; i<10; i++)
    {
        new_int = (int *) malloc(sizeof(int));
        if(new_int == NULL)
            continue;

        *new_int = i;
        list = append(list, MakeList(EmptyList(), new_int));
    }

    printf("map : print_list() : ");
    map(list, print_list);
    printf("\n\n");

    printf("map : multiply()");
    map(list, multiply);
    printf("\n\n");

    printf("map : print_list() : ");
    map(list, print_list);
    printf("\n\n");

    return 0;
}
