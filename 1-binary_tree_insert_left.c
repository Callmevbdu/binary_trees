#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as a left-child of
 * another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: Error "NULL", otherwise, a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *next;

	if (parent == NULL)
		return (NULL);

	next = binary_tree_node(parent, value);

	if (next == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		next->left = parent->left;
		parent->left->parent = next;
	}

	parent->left = next;
	return (next);
}
