#include "binary_trees.h"

/**
 * binary_tree_nodes - compte le nombre de noeud dans l'arbre binaire
 * 
 * @tree: l'arbre binaire à analyser
 * 
 * Return: le nombre de noeud dans l'arbre
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
