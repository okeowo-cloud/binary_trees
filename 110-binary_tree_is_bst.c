#include "binary_trees.h"
#include "limits.h"

/**
 * bst_helper - checks if a binary search tree is vald
 * @tree: a pointer to the root node to check
 * @lo: value of the smallest visited
 * @hi: value of the largest visited
 *
 * Return: 1 if its a valid bst, 0 otherwise
 */
int bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);

		return (bst_helper(tree->left, lo, tree->n - 1) &&
				bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree
 * is a valid binary search tree.
 *
 * @tree: is a pointer to the root node of the tree to check.
 * Return: 1 if tree is a valid BST, and 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bst_helper(tree, INT_MIN, INT_MAX));
}
