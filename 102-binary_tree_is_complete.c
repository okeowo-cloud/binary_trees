#include "binary_trees.h"

/**
 * is_full - checks if a node is full
 * @node: pointer to the node to check
 *
 * Return: 1 if full, 0 otherwise.
 */
int is_full(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);

		if (node->left || node->right)
			return (
					is_full(node->left)
					&&
					is_full(node->right)
					? 1 : 0
				);
		return (0);
	}
	return (1);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree:  is a pointer to the root node of the tree to check
 *
 * Return: 1 if complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
			(is_full(tree->right) && is_full(tree->left))
			? 1 : 0
		);
}
