#include "binary_trees.h"

/**
 * binary_tree_inorder - Parcours postordonné d'un arbre binaire.
 *
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers la fonction à appliquer à chaque nœud.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)) {
	if (tree == NULL || func == NULL)
		return;


	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);


}