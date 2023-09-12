#include "binary_trees.h"

/**
 *binary_tree_height - hauteur de l'arbre 
 * 
 * @tree: l'arbre binaire
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t height = 1;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_height > right_height)
			height = left_height + 1;
		else
			height = right_height + 1;
	}
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (height);
}
