#include "binary_trees.h"


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
	const binary_tree_t *mom, *dad;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *) first);

	mom = first->parent, dad = second->parent;

	if (first == dad || !mom || (!mom->parent && dad))
		return (binary_trees_ancestor(first, dad));
	else if (second == mom || !dad || (!dad->parent && mom))
		return (binary_trees_ancestor(second, mom));

	return (binary_trees_ancestor(mom, dad));
}
