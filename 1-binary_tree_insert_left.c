#include "binary_trees.h"

/**
*binary_tree_insert_left - inserts a node to the left side of the tree
*
*@parent: this is the root node
*@value: the value of the node
*Return: the pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *noode = NULL;

if (parent == NULL)
return (NULL);
/* make a call to the tree_node function) */
noode = binary_tree_node(parent, value);

/*if there is a node to the left, insert a node after it*/
if (parent->left == NULL)
parent->left = noode;
else
{
noode->left = parent->left; /*point new node to existing left nodeb */
parent->left = noode;
noode->left->parent = noode;
}
return (noode);
}

