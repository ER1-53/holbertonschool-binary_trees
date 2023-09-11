#include "binary_trees.h"

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_tree = malloc(sizeof(*new_tree));

    if (new_tree == NULL)
        return (NULL);

    new_tree->n = value;
    new_tree->left = NULL;
    new_tree->right = NULL;

    if (parent == NULL )
        new_tree->parent = NULL;
    else
        new_tree->parent = parent;

    return(new_tree);

}