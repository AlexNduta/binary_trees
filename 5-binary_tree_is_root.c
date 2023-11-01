#include "binary_trees.h"

/**
*binary_tree_is_root - checks if a node is the root
*
*@node: pointer to the current node
*Return: 1 if its the root 0 othewisw
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
if (node->parent == NULL)
return (1);

return (0);
}
