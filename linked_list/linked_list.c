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
 * @param[in] elem: Element added at the start of the list
 *
 * @return Pointer to new list if all is good, or input list if there's an error
 */
List *MakeList(List *l, void *elem)
{
    List *new = NULL;

    // Create new elem
    new = (List *) malloc(sizeof(List));
    if(new == NULL)
        return l;

    new->elem = elem;
    new->next = l;
    return new;
}


/**
 * @brief The append() function append the list l2 at the end of the list l1.
 *
 * @param[in] l1: The source list
 * @param[in] l2: The added list
 *
 * @return The concatenated list
 */
List *append(List *l1, List *l2)
{
    if(isEmpty(l1))
        return l2;
    else
        return MakeList(append(rest(l1), l2), first(l1));
}

/**
 * @brief The first() function return the first elem of the list.
 *
 * @param[in] l: The linked list
 *
 * @return The first element or NULL if the list is empty
 */
void *first(List *l)
{
    if(isEmpty(l))
        return NULL;

    return l->elem;
}


/**
 * @brief The last() function return the last elem of the list.
 *
 * @param[in] l: The linked list
 *
 * @return The last element or NULL if the list is empty
 */
void *last(List*l)
{
    // List is empty
    if(isEmpty(l))
        return NULL;
    // One element in the list
    else if(isEmpty(rest(l)))
        return first(l);
    // Recursive case
    else
        return last(rest(l));
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
 */
void map(List *l, void *(*f)(void *))
{
    if(!isEmpty(l))
    {
        l->elem = f(l->elem);
        map(rest(l), f);
    }
}
