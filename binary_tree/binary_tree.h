/**
 * @file binary_tree.h
 * @author ALARY Dorian
 * @brief This file is the header of the binary tree library
 */

#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

#include <stdbool.h>

/**
 * The user should define the type T.
 * Default type is integer.
 */
#ifndef T
#define T int
#endif


typedef struct bt BinaryTree;


/**
 * @brief The emptyBTree() function returns an empty binary tree.
 *
 * @return An empty binary tree.
 */
BinaryTree *emptyBTree(void);


/**
 * @brief The makeBTree() functions returns a binary tree constructed with a
 *        value and two sub binary tree.
 *
 * @param[in] value: The value of the root node. The type is defined by the
 *                   user.
 * @param[in] left: The left sub-tree.
 * @param[in] right: The right sub-tree.
 *
 * @return A binary tree with a value and two sub-tree.
 */
BinaryTree *makeBTree(T value,
                      BinaryTree const *left,
                      BinaryTree const *right);


/**
 * @brief The rootBTree() function returns the value of the root node of the
 *        tree.
 *
 * @param[in] btree: The binary tree.
 *
 * @return The value of the root node of three.
 */
T rootBTree(BinaryTree const *btree);


/**
 * @brief The leftBTree() function return the left sub-tree of the root
 *        binary tree.
 *
 * @param[in] btree: The binary tree.
 *
 * @return The left sub-tree.
 */
BinaryTree *leftBTree(BinaryTree const *btree);


/**
 * @brief The rightBTree() function return the right sub-tree of the root
 *        binary tree.
 *
 * @param[in] btree: The binary tree.
 *
 * @return The right sub-tree.
 */
BinaryTree *rightBTree(BinaryTree const *btree);


/**
 * @brief The isEmptyBTree() function return true if the binary tree is empty,
 *        false instead.
 *
 * @param[in] btree: The binary tree.
 *
 * @return True is the binary tree is empty, false instead?
 */
bool isEmptyBTree(BinaryTree const *btree);


/**
 * @brief The isEmptyBTree() function return the size (number of element)
 *        of the binary tree.
 *
 * @param[in] btree: The binary tree.
 *
 * @return The size of the binary tree.
 */
unsigned int sizeBTree(BinaryTree const *btree);


/**
 * @brief The heightBTree() function return the height (max path size) of the
 *        binary tree.
 *
 * @param[in] btree: The binary tree.
 *
 * @return The height of the binary tree.
 */
unsigned int heightBTree(BinaryTree const *btree);

#endif // __BINARY_TREE_H__