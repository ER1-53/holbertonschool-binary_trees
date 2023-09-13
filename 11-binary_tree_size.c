#include "binary_trees.h"

/**
 * binary_tree_size - compte le nombre de noeud dans un arbre binaire
 *
 * @tree: l'arbre binaire
 *
 * Return: le nombre de noeud dans l'arbre
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);


	return (size);
}
