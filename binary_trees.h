#ifndef BINARY_H
#define BINARY_H

#include <stddef.h>
#include <stdio.h>
#include <sdtlib.h>
#include <string.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to 
 * @right: Pointer to tyhe right child node
 */

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
}
typedef struct binary_tree_s binary_tree_t;

/* tester function */
void binary_tree_print(const binary_tree_t *);

/*project */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);












#endif
