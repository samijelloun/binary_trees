#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *path_first[100] = {NULL};
	size_t path_first_length = 0;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	while (first != NULL)
	{
		path_first[path_first_length++] = (binary_tree_t *)first;
		first = first->parent;
	}

	while (second != NULL)
	{
		for (size_t i = 0; i < path_first_length; ++i)
		{
			if (path_first[i] == second)
				return ((binary_tree_t *)second);
		}

		second = second->parent;
	}

	return (NULL);
}
