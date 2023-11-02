#include "binary_trees.h"

/**
*binary_tree_preorder - traverserses the tree fromroot->left->right
*
*@tree: the pointer to the root node 
*@func: pointer to a function to call for each node
*
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree != NULL && func != NULL) /* check if the root and the callback functins are valid */
{
    func(tree->n);
binary_tree_preorder(tree->left, func); /* recurse on left*/
binary_tree_preorder(tree->right, func); /*recurse on right*/
}
}
