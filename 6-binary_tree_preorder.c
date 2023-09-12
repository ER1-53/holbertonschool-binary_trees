#include "binary_trees.h"

/**
 * binary_tree_preorder - Parcours préordonné d'un arbre binaire.
 *
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers la fonction à appliquer à chaque nœud.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);


	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);


	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);



}
