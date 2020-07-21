#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent:  is a pointer to the node to insert the left-child in.
 * @value: Is te value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_ltree = NULL;
	new_ltree = malloc(sizeof(binary_tree_t));
	if (new_ltree == NULL)
	{
		return (NULL);
	}
	new_ltree->parent = parent;
	new_ltree->left = NULL;
	new_ltree->right = NULL;
	new_ltree->n = value;

	if (parent->left != NULL)
	{
		new_ltree->left = parent->left;
		new_ltree->left->parent = new_ltree;
	}
	parent->left = new_ltree;
	return (new_ltree);
}

