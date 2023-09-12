#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node) {

	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}