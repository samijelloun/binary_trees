#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another in a binary tree
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new;

	parent->right = new;

	return (new);
}
