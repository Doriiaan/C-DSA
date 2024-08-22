#include "double_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    DlkList *list = NULL;
    int *new_int = NULL;

    list = createDlkList();

    for(int i=0; i<10; i++)
    {
        new_int = (int *) malloc(sizeof(int));
        if(new_int == NULL)
            continue;

        *new_int = i;
        list = pushLastDlkList(list, new_int);
    }

    printf("Elements (%d) : ", lengthDlkList(list));
    for (int i = 0; i < 10; i++)
    {
        if(!isEmptyDlkList(list))
        {
            int *tmp = firstDlkList(list);
            printf("%d ", *(int *)tmp);
            popFirstDlkList(list);
            free(tmp);
        }
    }
    printf("\n");

    deleteDlkList(&list);

    return 0;
}
