#include "binary_trees.h"

/**
 * check_node_depth - finds the depth of a node
 * @node: pointer to determine its depth
 *
 * Return: the depth of the node.
 */
int check_node_depth(const binary_tree_t *node)
{
	int depth = 0;

	if (!node)
		return (depth);

	while (node)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: pointer to the lowest common ancestor of node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int d1, d2;

	if (!first || !second)
		return (NULL);

	if (first->parent == second)
		return ((binary_tree_t *) second);
	else if (second->parent == first)
		return ((binary_tree_t *) first);

	d1 = check_node_depth(first);
	d2 = check_node_depth(second);

	if (d1 > d2)
		while (d1 != d2)
		{
			first = first->parent;
			d1--;
		}
	else if (d1 < d2)
		while (d1 != d2)
		{
			second = second->parent;
			d2--;
		}

	if (first->parent == second->parent)
		return ((binary_tree_t *) first->parent);

	return (NULL);
}
