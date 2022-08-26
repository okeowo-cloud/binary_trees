#include "binary_trees.h"

/**
 * bst_search - searches for a value in a bst
 * @tree: is a pointer to the root node of the BST to search
 * @value: value to search for
 *
 * Return: a pointer to the node containing a value equals to value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (tree->n == value)
			return ((bst_t *) tree);
		
		if (value < tree->n)
			return (bst_search(tree->left, value));
		else if (value > tree->n)
			return (bst_search(tree->right, value));
	}
	return (NULL);
}
