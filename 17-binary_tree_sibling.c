#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that searches for the sibling of a node in
 * a binary tree.
 * @node: pointer to the node to find.
 * Return: node is 'NULL' or no sibling (NULL). Otherwise a pointer to sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
