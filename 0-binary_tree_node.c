#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_node - creates a new node for our tree
* @parent: pointer to the parent node
* @value: the value to be stored in the node
* Return: the pointer to the node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

if (node == NULL)
return (NULL);

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}

