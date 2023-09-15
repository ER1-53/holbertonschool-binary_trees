#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return:
 * - Number of leaf nodes.
 * - If tree is NULL, return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	size_t leaves_right = 0;
	size_t leaves_left = 0;

	if (tree == NULL)
		return (0);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		leaves = leaves_left + 1;
		leaves = leaves_right + 1;
	}
	if (tree->left != NULL || tree->right != NULL)
		leaves = leaves_left + leaves_right;

	return (leaves);
}
