#include "binary_trees.h"

/**
*binary_tree_is_leaf - checks if a node is a leaf(no child nodes)
*@node: pointer to the node to check
*
* Return: 1 if node is a leaf 0 if not a leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (0);
} else if(node->left && node->right != NULL)
{
return (1);
} else if(node->left && node->right == NULL)
{
return (0);
}
else
{
if (node->left != NULL && binary_tree_is_leaf(node->left))
{
    return (1);
} else if (node->right != NULL && binary_tree_is_leaf(node->right))
{
    return (1);
}else
{
    return (0);
}
}
}


