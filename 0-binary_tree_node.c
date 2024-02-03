#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 * Return: "NULL" error, otherwise a pointer to the next node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *next;

	next = malloc(sizeof(binary_tree_t));

	if (next == NULL)
		return (NULL);

	next->n = value;
	next->parent = parent;
	next->left = NULL;
	next->right = NULL;

	return (next);
}
