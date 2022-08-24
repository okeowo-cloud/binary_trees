#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	return (
			node->parent->left == node
			? node->parent->right :
			node->parent->right == node
			? node->parent->left : NULL
		);
}
