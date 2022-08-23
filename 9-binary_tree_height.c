#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: is always void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (-1);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	return ((left_height > right_height) ? left_height : right_height);
}
