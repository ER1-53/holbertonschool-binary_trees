#include "binary_trees.h"

/**
 * binary_tree_postorder - Parcours postordonné d'un arbre binaire.
 *
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers la fonction à appliquer à chaque nœud.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;
	if (!tree)
		return (0);

	if (binary_tree_depth(tree->left) || binary_tree_depth(tree->right))

	return (count);

}
