#include "binary_trees.h"

/**
 * binary_tree_postorder - Parcours postordonné d'un arbre binaire.
 *
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers la fonction à appliquer à chaque nœud.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
