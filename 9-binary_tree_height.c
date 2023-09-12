#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	return(binary_tree_height(tree->left) + 1);
	return(binary_tree_height(tree->right) + 1);

	return (left_height);
	return (right_height);
}