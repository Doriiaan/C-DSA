/**
 * @author ALARY Dorian
 * @date 18/08/2024
 * @brief Implementation of linked list.
 */

#include "linked_list.h"

#include <stdlib.h>

struct list
{
    // next elem
    struct list * next;

    // data of any type
    void * elem;
};


/**
 * @brief The EmptyList() function is one of the constructor of the linked 
 *        list.
 *
 * @return Empty list
 */
List *EmptyList()
{
    return NULL;
}


/**
 * @brief The MakeList() function is one of the constructor of the linked
 *        list. It adds the element at the start of the list.
 *
 * @param[in] l: The linked list
 * @param[in] elem: Element added at the end of the list
 *
 * @return Pointer to new list if all is good, or input list if there's an error
 */
List *MakeList(List *l, void *elem)
{
    List *new = NULL, *current = NULL;

    // Create new elem
    new = (List *) malloc(sizeof(List));
    if(new == NULL)
        return l;

    new->elem = elem;
    new->next = l;

    return new;
}


/**
 * @brief The first() function return the first elem of the list.
 *
 * @param[in] l: The linked list
 *
 * @return elem of the first element or NULL if the list is empty
 */
void *first(List *l)
{
    if(isEmpty(l))
        return NULL;

    return l->elem;
}


/**
 * @brief The rest() function return the rest of the list.
 *
 * @param[in] l: The linked list
 *
 * @return the rest of the list or NULL if the list is empty.
 */
List * rest(List *l)
{
    if(isEmpty(l))
        return NULL;

    return l->next;
}


/**
 * @brief The isEmpty() function return true if the list is empty.
 *
 * @param[in] l: The linked list
 *
 * @return true if the list is empty, false instead.
 */
bool isEmpty(List *l)
{
    return l == NULL;
}



/**
 * @brief The replaceFirst() function replace the first element.
 *
 * @param[in] l: The linked list
 * @param[in] elem: The new value of the first element
 *
 * @return 0 on success, -1 on failure
 */
int replaceFirst(List *l, void *elem)
{
    if(isEmpty(l))
        return -1;
    
    l->elem = elem;
    return 0;
}


/**
 * @brief The replaceRest() function replace the rest of the list.
 *
 * @param[in] l: The linked list
 * @param[in] rest: The rest 
 *
 * @return 0 on success, -1 on failure
 */
int replaceRest(List *l, List *rest)
{
    if(isEmpty(l))
        return -1;

    l->next = rest;
    return 0;
}


/**
 * @brief The map() function call the function f on every elem of the list.
 *
 * @param[in] l: The linked list
 * @param[in] f: The map function 
 *
 * @return l
 */
List *map(List *l, void *(*f)(void *))
{
    if(isEmpty(l))
        return l;

    List *current = NULL, *new = NULL;

    current = l;
    while(!isEmpty(current))
    {
        current->elem = f(current->elem);
        current = rest(current);
    }

    return l;
}
