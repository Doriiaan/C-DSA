/**
 * @author ALARY Dorian
 * @brief Implementation of Linked list
 */

#include "linked_list.h"

#include <stdlib.h>

typedef struct cell
{
    // Element
    void *elem;

    // Next Cell
    struct cell *next;
} Cell;

struct list
{
    // First cell 
    Cell * head;

    // Number of cell;
    unsigned int length;
};


List *createList()
{
    List *list = malloc(sizeof(List));
    if(list == NULL)
        return NULL;
    
    list->head = NULL;
    list->length = 0;
    return list;
}


void deleteList(List **list)
{
    if(*list == NULL)
        return;

    while(!isEmptyList(*list))
        popList(*list);
    
    free(*list);
    *list = NULL;
}

List *pushList(List *list, void *elem)
{
    if(list == NULL)
        return NULL;
    
    Cell *new = malloc(sizeof(Cell));
    new->elem = elem;
    new->next = list->head;
    list->head = new;
    list->length++;
    return list;
}


List *popList(List *list)
{
    if(list == NULL || isEmptyList(list))
        return list;

    Cell *tmp = list->head;
    list->head = tmp->next;
    free(tmp);
    list->length--;
    return list;
}


void *atList(List *list, unsigned int i)
{
    if(list == NULL || isEmptyList(list))
        return NULL;

    Cell *current = list->head;
    while(current->next != NULL && i > 0)
    {
        current = current->next;
        i--;
    }

    return current->elem;
}


bool isEmptyList(List *list)
{
    return (list == NULL || list->head == NULL);
}


unsigned int lengthList(List *list)
{
    return list->length;
}