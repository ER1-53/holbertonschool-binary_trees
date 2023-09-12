#include "binary_trees.h"

/**
* binary_tree_is_root -  verifie si la node donner est le root
*
* @node: la node specifiée
*/


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}