#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

/**
 * @author ALARY Dorian
 * @brief Implementation of linked list.
 */

#include <stdbool.h>

typedef struct list List;

/**
 * @brief The createList() function create an empty list.
 *
 * @return A pointer to the empty list.
 */
List *createList();


/**
 * @brief The deleteList() function delete a list from memory.
 *
 * @param[in] list: A pointer to pointer to the list.
 */
void deleteList(List **list);


/**
 * @brief The pushList() function push an element at the begining of the list.
 *
 * @param[in] list: A pointer to the list.
 * @param[in] elem: The element to push in the list.
 *
 * @return A pointer to the list.
 */
List *pushList(List *list, void *elem);


/**
 * @brief The popList() function remove an element from the list.
 *
 * @param[in] list: A pointer to the list.
 *
 * @return A pointer to the list.
 */
List *popList(List *list);


/**
 * @brief The atList() function return the element at the position i.
 *
 * @param[in] list: A pointer to the list.
 * @param[in] i: The index of the returned element.
 *
 * @return The element at the position i.
 */
void *atList(List *list, unsigned int i);


/**
 * @brief The isEmptyList() return true if the list is empty, false instead.
 *
 * @param[in] list: A pointer to the list.
 *
 * @return true if the list is empty, false instead.
 */
bool isEmptyList(List *list);


/**
 * @brief The lengthList() return the length of the list.
 *
 * @param[in] list: A pointer to the list.
 *
 * @return The length of the list.
 */
unsigned int lengthList(List *list);

#endif // __LINKED_LIST_H__
