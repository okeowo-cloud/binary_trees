#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full -  function checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full otherwise o
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftSubTree, rightSubTree;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leftSubTree = binary_tree_is_full(tree->left);
	rightSubTree = binary_tree_is_full(tree->right);

	if (leftSubTree == 0 || rightSubTree == 0)
		return (0);
	return (1);
}
