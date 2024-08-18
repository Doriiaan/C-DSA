#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>


void *print_list(void *elem)
{
    printf("%d ", *(int *)elem);
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

    printf("LIST :\n[ ");
    map(list, print_list);
    printf("]\n");

    printf("REST LIST :\n[ ");
    map(rest(list), print_list);
    printf("]\n");

    printf("isEmpty() = %d\n", isEmpty(list));

    int a = 8;
    replaceFirst(list, &a);

    printf("REPLACE LIST :\n[ ");
    map(list, print_list);
    printf("]\n");

    return 0;
}
