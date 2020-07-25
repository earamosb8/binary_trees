#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree
 * Return: 1 full | 0 not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		if ((binary_tree_is_full(tree->right)) && (binary_tree_is_full(tree->left)))
		{
			return (1);
		}
	}
	return (0);
}
