#include "binary_trees.h"

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire.
 *
 * @tree: Pointeur vers le nœud racine de l'arbre.
 *
 * Return: La hauteur de l'arbre.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t height = 1;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		height = left_height + 1;
	else
		height = right_height + 1;
	return (height);
}

/**
 * binary_tree_balance - Counts the number of leaf nodes in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return:
 * - Number of leaf nodes.
 * - If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	size_t balance_right;
	size_t balance_left;

	if (tree == NULL)
		return (0);

	balance_left = binary_tree_height(tree->left);
	balance_right = binary_tree_height(tree->right);

	return (balance_left - balance_right);
}
