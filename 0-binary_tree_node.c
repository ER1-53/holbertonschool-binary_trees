#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Integer value to store in the node
 *
 * Return: A pointer to the newly created node, or NULL on failure
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
