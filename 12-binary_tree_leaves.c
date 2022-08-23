#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the leaves in binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of leaves
 * Return: number of leavees node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}