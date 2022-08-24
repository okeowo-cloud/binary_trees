#include "binary_trees.h"

/**
 * binary_tree_is_full -  function checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full otherwise o
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	int leftSubTree = binary_tree_is_full(tree->left);
	int rightSubTree = binary_tree_is_full(tree->right);

	if (leftSubTree == 0 || rightSubTree == 0)
		return (0);
	return (1);
}
