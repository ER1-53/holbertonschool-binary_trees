#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height += binary_tree_height(tree->left) + 1;
	left_height += binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}