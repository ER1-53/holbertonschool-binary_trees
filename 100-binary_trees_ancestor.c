#include "binary_trees.h"

/**
 * binary_trees_ancestor - trouve l'ancetre de deux noeuds
 *
 * @first: premier noeud
 * @second: second noeud
 *
 * Return: retourne l'ancetre en commun des deux noeuds ou retourne NULL si
 * aucun ancetre na ete trouver
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == NULL || second == NULL)
		return (NULL);

	tmp = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tmp;
		first = first->parent;
	}
	return (NULL);
}
