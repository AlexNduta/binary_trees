#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a node to the right of the parent node
* @parent: the root node
* @value: the value to be held by the node
* Return: a pointer to the created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *noode = NULL;

if (parent == NULL)
return (NULL);

noode = binary_tree_node(parent, value);
if (parent->right == NULL)
{
parent->right = noode;
}
else
{
noode->right = parent->right;
parent->right = noode;
noode->right->parent = noode;
}
return (noode);
}

