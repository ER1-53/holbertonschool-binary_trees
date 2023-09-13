#include "binary_trees.h"

/**
 * binary_tree_sibling - trouve le frere de la node actuel
 * 
 * @node: node actuel
 * 
 * return: Le frere du noeud ou NULL si le noeud est NULL ou s'il n'a pas de frere.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
