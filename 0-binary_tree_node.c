#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: Is te value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_btree = NULL;

	new_btree = malloc(sizeof(binary_tree_t));

	if (new_btree == NULL)
	{
		return (NULL);
	}

	new_btree->parent = parent;
	new_btree->left = NULL;
	new_btree->right = NULL;

	new_btree->n = value;

	return (new_btree);
}
