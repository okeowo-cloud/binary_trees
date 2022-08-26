#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node
 * of the BST to insert the value
 * @value: value to be inserted
 *
 * Return: pointer to the newly inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *new;

	if (tree)
	{
		current = *tree;

		if (!current)
		{
			new = binary_tree_node(current, value);
			if (!new)
				return (NULL);
			return (*tree = new);
		}

		if (value < current->n)
		{
			if (current->left)
				return (bst_insert(&current->left, value));

			new = binary_tree_node(current, value);
			if (!new)
				return (NULL);
			return (current->left = new);
		}
		if (value > current->n)
		{
			if (current->right)
				return (bst_insert(&current->right, value));

			new = binary_tree_node(current, value);
			if (!new)
				return (NULL);
			return (current->right = new);
		}
	}

	return (NULL);
}
