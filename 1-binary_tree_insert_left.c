#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of a parent node.
 *
 * @parent: Pointer to the parent node where the new node will be inserted.
 * @value: The integer value to be stored in the new node.
 *
 * Return:
 * - If malloc fail or parent = NULL, it returns NULL.
 * - Otherwise, it returns a pointer to the newest created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);

    if (new_node == NULL) {
        return NULL;
    }

    if (parent->left != NULL) {
        binary_tree_t *temp = parent->left;
        parent->left = new_node;
        new_node->left = temp;
        temp->parent = new_node;
    } else {
        parent->left = new_node;
    }

    return new_node;
}
