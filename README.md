# binary_trees

- Binary tree is non-linear hierachical data structure that stores all types of data that are connected with links


## task 0
A function that creates a binary tree node
    -prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, intvalue);`

    -where the `parent is a pointer to the parent node to created
    -And `value` is the value to put in the new node
    -When created, a node does not have any child
    -the function must retain a pointer to the new node, or NULL on failure

## task 1
A function that inserts a node as the left-child of another node
    `prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
    -Where the parent is a pointer to the  node to insert the left-child in
    -value is the value to store in the new node
    -The function must return a pointer to the created node or NULL on failure or if parent is NULL
    -If parent already has a left child, the new-node must take its place and the old left-child must be set as the left child of the new node.


## task 2
A function that inserts a node as the right-child of another node
    -prototype `binary_tree_t * binary_tree_insert_right(binary_tree_t *parent, int value)`
    -`parent`  pointer to the node to insert the right-child in
    -`value` value to store in the new node
    - the function must return a pointer to the created node, or NULL on failure of if `parent` id NULL
    - if `parent` already has a right-child, new node must take its palce and the old right-child must be set as the right-child of the new node.

## task 3
A function that deletes an entire binary tree
    -prototype `void binary_tree_delete(binary_tree_t *tree)`
    -tree is a pointer to the root node of the tree to deleter
    -if tree is NULL, do nothing


## task 4
A function that checks if a node is a leaf:
    -prototype `int binary_tree_is_leaf(conat binary_tree_t *node)`
    -node is the pointer to the node to check
    -The function must return 1 if node is a leaf, otherwise 0
    -if node is NULL, return 0


## task 5
A function that checks if a given node is root
    -prototype `int binary_tree_root(const binary_tree_t *node)`
    -the node is the pointer to the node to check
    -return 1 if node is a root, otherwise, return  0
    -if the node is NULL, return 0


## task 6
A function  that goes through a binary tree using pre-order traversal
    -prototype: void bnary_tree_preorder(const binary_tree_t * tree, void (* func)(int));
    -tree is a pointer to the root node of the tree to traverse
    -func is a pointer to a function call for each node. Value in the node must be passed as a parameter to this function.
    - if `tree` or `func` is `NULL`, do nothing
