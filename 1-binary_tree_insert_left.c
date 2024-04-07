#include "binary_trees.h"

/**
 * binary_tree_insert_left - nserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: value to put in the new node
 * Return: Pointer to the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new;
	parent->left = new;
	return (new);
}
