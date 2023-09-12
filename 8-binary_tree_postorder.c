#include "binary_trees.h"

/**
 * binary_tree_postorder - Parcours postordonné d'un arbre binaire.
 *
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers la fonction à appliquer à chaque nœud.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
