#include "binary_trees.h"

/**
 * binary_tree_is_full - verifie si un arbre binaire est complet
 * 
 * @tree: l'arbre binaire a verifier
 * 
 * Return: 1 si l'arbre est complet sinon 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
