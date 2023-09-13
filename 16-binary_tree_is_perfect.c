#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t height = 1;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);



	if (tree->left != NULL && tree->right != NULL)
	{
		if (left_height >= right_height)
			height = left_height + 1;
		else
			height = right_height + 1;
	}
	if (tree->left == NULL && tree->right == NULL)
		height = 0;

	return (height);
}



/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 *
 * @node: Pointer to the node to check.
 *
 * Return:
 * - true (1) if the node is a leaf.
 * - false (0) if the node is not a leaf or is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->left == NULL && node->right == NULL))
		return (1);

	return (0);


}
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_right, tree_left;
	/*int leaf;*/

	if (tree == NULL)
		return (0);
	/*leaf = binary_tree_is_leaf(tree);*/
	/*printf("numero de node %d, valeur de leaf %d\n", tree->n ,leaf);*/

	tree_right = binary_tree_height(tree->left);
	tree_left = binary_tree_height(tree->right);

	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);


	if (binary_tree_is_leaf(tree->left) == binary_tree_is_leaf(tree->right))
	{
		if (tree_left == tree_right)
			return (1);
	}
	return (0);
}
