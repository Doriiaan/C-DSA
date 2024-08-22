#ifndef __DOUBLE_LINKED_LIST_H__
#define __DOUBLE_LINKED_LIST_H__

/**
 * @author ALARY Dorian
 * @brief Implementation of Double linked list
 */

#include <stdbool.h>

typedef struct dlklist DlkList;


/**
 * @brief The createDlkList() function return an empty double linked list.
 *
 * @return An empty double linked list.
 */
DlkList *createDlkList(void);


/**
 * @brief The deleteDlkList() function delete a double linked list from
 *        memory.
 *
 * @param[in] dlklist: The double linked list.
 */
void deleteDlkList(DlkList **dlklist);


/**
 * @brief The pushFirstDlkList() function push and element at the first of a
 *        double linked list.
 *
 * @param[in] dlklist: The double linked list.
 * @param[in] elem: The element to push.
 *
 * @return The double linked list with the new element.
 */
DlkList *pushFirstDlkList(DlkList *dlklist, void *elem);


/**
 * @brief The pushLastDlkList() function push and element at the last of a
 *        double linked list.
 *
 * @param[in] dlklist: The double linked list.
 * @param[in] elem: The element to push.
 *
 * @return The double linked list with the new element.
 */
DlkList *pushLastDlkList(DlkList *dlklist, void *elem);


/**
 * @brief The popFirstDlkList() function pop and element from the first of the
 *        double linked list.
 *
 * @param[in] dlklist: The double linked list.
 *
 * @return The double linked list.
 */
DlkList *popFirstDlkList(DlkList *dlklist);


/**
 * @brief The popLastDlkList() function pop and element from the last of the
 *        double linked list.
 *
 * @param[in] dlklist: The double linked list.
 *
 * @return The double linked list.
 */
DlkList *popLastDlkList(DlkList *dlklist);


/**
 * @brief The firstDlkList() function return the element at the first of the
 *        double linked list.
 *
 * @param[in] dlklist: The double linked list.
 *
 * @return The element at the first of the double linked list.
 */
void *firstDlkList(DlkList *dlklist);


/**
 * @brief The lastDlkList() function return the element at the last of the
 *        double linked list.
 *
 * @param[in] dlklist: The double linked list.
 *
 * @return The element at the last of the double linked list.
 */
void *lastDlkList(DlkList *dlklist);


/**
 * @brief The isEmptyDlkList() function return true if the double linked list
 *        is empty, false instead.
 *
 * @param[in] dlklist: The double linked list.
 *
 * @return true if the double linked list is empty, false instead.
 */
bool isEmptyDlkList(DlkList *dlklist);


/**
 * @brief The lengthDlkList() function return the length of the double linked
 *        list.
 *
 * @param[in] dlklist: The double linked list.
 *
 * @return The length of the double linked list.
 */
unsigned int lengthDlkList(DlkList *dlklist);

#endif // __DOUBLE_LINKED_LIST_H__
