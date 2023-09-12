#include "binary_trees.h"

/**
* binary-tree-delete - Supprime l'arbre avec toutes les nodes
*  
* @tree: l'arbre binaire
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
