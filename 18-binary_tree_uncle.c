#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a binary tree node.
 *
 * @node: Pointer to the node for which to find the uncle.
 *
 * Return: Pointer to the uncle node or NULL if no uncle exists.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
