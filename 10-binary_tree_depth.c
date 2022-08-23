#include "binary_trees.h"

/**
 * binary_tree_depth - function measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? binary_tree_depth(tree->parent) + 1 : 0);
}
