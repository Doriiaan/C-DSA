
/**
 * @file main.c
 * @author ALARY Dorian
 * @brief This file is a use example of binary tree library
 */

#include "binary_tree.h"
#include <stdio.h>

#define T int

int main()
{
    BinaryTree *bt = emptyBTree();

    bt = makeBTree(7,
                    makeBTree(8, 
                            makeBTree(-1, emptyBTree(), emptyBTree()),
                            makeBTree(8, emptyBTree(), emptyBTree())
                            ),
                    makeBTree(2,
                            makeBTree(7, emptyBTree(), emptyBTree()),
                            emptyBTree() 
                            )
                   );


    printf("Size of tree: %d\nHeight of tree: %d\n\n",
           sizeBTree(bt),
           heightBTree(bt));

    printf("root: %d\n\n", rootBTree(bt));

    return 0;
}