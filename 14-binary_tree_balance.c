#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance - function measures the balance factor
 * of a binary tree
 * @tree: is a pointer to the root node of the tree to measur
 * the balance factor
 *
 * Return: an interger to that is equal to 0 for a balnced
 * factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_sub_tree, right_sub_tree;

	if (tree == NULL)
		return (0);
	left_sub_tree = binary_tree_height(tree->left);
	right_sub_tree = binary_tree_height(tree->right);
	return (left_sub_tree - right_sub_tree); /*value < 1 or = 0 is HB(K) bt*/
}
