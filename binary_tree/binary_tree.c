/**
 * @file binary_tree.c
 * @author ALARY Dorian
 * @brief This file is the source of the binary tree library
 */

#include "binary_tree.h"
#include <stdlib.h>

#ifndef MAX
#define MAX(a, b) ((a > b) ? a : b)
#endif // MAX

struct bt
{
    //The value of the root node of the binary tree.
    // The type T is defined by the user. See binary_tree.h
    T value;

    // The left sub-tree
    struct bt *left;

    // The right sub-tree
    struct bt *right;
};

BinaryTree *emptyBTree(void)
{
    return NULL;
}


BinaryTree *makeBTree(T value,
                      BinaryTree const *left, 
                      BinaryTree const *right)
{
    BinaryTree *btree = malloc(sizeof(BinaryTree));
    if (btree == NULL)
        return NULL;

    btree->value = value;
    btree->left = (BinaryTree *) left;
    btree->right = (BinaryTree *) right;

    return btree;
}


T rootBTree(BinaryTree const *btree)
{
    if(isEmptyBTree(btree))
        // This is a bad practice but, the only value defined for any
        // data type is 0
        return 0;

    else
        return btree->value;
}


BinaryTree *leftBTree(BinaryTree const *btree)
{
    if(isEmptyBTree(btree))
        return NULL;
    return btree->left;
}


BinaryTree *rightBTree(BinaryTree const *btree)
{
    if(isEmptyBTree(btree))
        return NULL;
    return btree->right;
}


bool isEmptyBTree(BinaryTree const *btree)
{
    return btree == NULL;
}


unsigned int sizeBTree(BinaryTree const *btree)
{
    if(isEmptyBTree(btree))
        return 0;

    return 1 + sizeBTree(btree->left) + sizeBTree(btree->right);
}


unsigned int heightBTree(BinaryTree const *btree)
{
    if(isEmptyBTree(btree))
        return 0;
    
    int leftHeight = heightBTree(btree->left);
    int rightHeight = heightBTree(btree->right);
    
    return 1 + MAX(leftHeight, rightHeight);
}