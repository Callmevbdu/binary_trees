#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that insert a node as the right-child
 * of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: Error "NULL", otherwise a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *next;

	if (parent == NULL)
		return (NULL);

	next = binary_tree_node(parent, value);

	if (next == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		next->right = parent->right;
		parent->right->parent = next;
	}

	parent->right = next;
	return (next);
}
