/**
 * @author ALARY Dorian
 * @brief Implementation of Double linked list
 */

#include "double_linked_list.h"

#include <stdlib.h>

typedef struct cell
{
    // The element
    void *elem;

    // The previous cell
    struct cell *prev;

    // The next cell
    struct cell *next;

} Cell;

struct dlklist
{
    // The first element
    Cell *first;

    // The last element
    Cell *last;

    // The number of element
    unsigned int length;
};

DlkList *createDlkList(void)
{
    DlkList *dlklist = malloc(sizeof(DlkList));
    if(dlklist == NULL)
        return NULL;

    dlklist->first = NULL;
    dlklist->last = NULL;
    dlklist->length = 0;

    return dlklist;
}


void deleteDlkList(DlkList **dlklist)
{
    if(*dlklist == NULL)
        return;

    while(!isEmptyDlkList(*dlklist))
        popFirstDlkList(*dlklist);

    free(*dlklist);
    *dlklist = NULL;
}


DlkList *pushFirstDlkList(DlkList *dlklist, void *elem)
{
    if(dlklist == NULL)
        return NULL;

    Cell *new = malloc(sizeof(Cell));
    if(new == NULL)
        return dlklist;

    new->elem = elem;

    new->prev = NULL;

    new->next = dlklist->first;
    if(new->next != NULL)
        new->next->prev = new;

    if(isEmptyDlkList(dlklist))
        dlklist->last = new;
    dlklist->first = new;

    dlklist->length++;

    return dlklist;
}


DlkList *pushLastDlkList(DlkList *dlklist, void *elem)
{
    if(dlklist == NULL)
        return NULL;

    Cell *new = malloc(sizeof(Cell));
    if(new == NULL)
        return dlklist;

    new->elem = elem;

    new->next = NULL;
    new->prev = dlklist->last;
    if(new->prev != NULL)
        new->prev->next = new;

    if(isEmptyDlkList(dlklist))
        dlklist->first = new;
    dlklist->last = new;

    dlklist->length++;

    return dlklist;
}

DlkList *popFirstDlkList(DlkList *dlklist)
{
    if(dlklist == NULL || isEmptyDlkList(dlklist))
        return dlklist;

    if(lengthDlkList(dlklist) == 1)
    {
        free(dlklist->first);
        dlklist->first = NULL;
        dlklist->last = NULL;
    }
    else
    {
        Cell *tmp = dlklist->first;
        dlklist->first = dlklist->first->next;
        dlklist->first->prev = NULL;
        free(tmp);
    }
    dlklist->length--;
    return dlklist;
}


DlkList *popLastDlkList(DlkList *dlklist)
{
    if(dlklist == NULL || isEmptyDlkList(dlklist))
        return dlklist;

    if(lengthDlkList(dlklist) == 1)
    {
        free(dlklist->last);
        dlklist->first = NULL;
        dlklist->last = NULL;
    }
    else
    {
        Cell *tmp = dlklist->last;
        dlklist->last = dlklist->last->prev;
        dlklist->last->next = NULL;
        free(tmp);
    }
    dlklist->length--;
    return dlklist;
}


void *firstDlkList(DlkList *dlklist)
{
    if(dlklist == NULL ||isEmptyDlkList(dlklist))
        return NULL;

    return dlklist->first->elem;
}


void *lastDlkList(DlkList *dlklist)
{
    if(dlklist == NULL || isEmptyDlkList(dlklist))
        return NULL;

    return dlklist->last->elem;
}


bool isEmptyDlkList(DlkList *dlklist)
{
    return (dlklist == NULL || dlklist->length == 0);
}


unsigned int lengthDlkList(DlkList *dlklist)
{
    if(dlklist == NULL)
        return 0;

    return dlklist->length;
}