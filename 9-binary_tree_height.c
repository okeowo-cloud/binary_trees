#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: is always void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree)
	{
		l_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return (l_h > r_h ? l_h : r_h);
	}

	return (0);
}
