#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t L = 0, R = 0;

	if (!tree)
		return (0);
	if (tree->left)
		L = binary_tree_size(tree->left);
	if (tree->right)
		R = binary_tree_size(tree->right);
	return (L + R + 1);
}
