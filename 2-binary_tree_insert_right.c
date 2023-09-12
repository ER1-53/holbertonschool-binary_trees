#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right child of
 * a parent node.
 *
 * @parent: Pointer to the parent node where the new node will be inserted.
 * @value: The integer value to be stored in the new node.
 *
 * Return:
 * - If malloc fail or parent = NULL, it returns NULL.
 * - Otherwise, it returns a pointer to the newest created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (new_node->parent->right)
	{
		new_node->right = new_node->parent->right;
		new_node->parent->right->parent = new_node;
	}

	new_node->parent->right = new_node;

	return (new_node);

}
