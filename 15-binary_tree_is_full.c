#include "binary_trees.h"

/**
 * recursivelyFull - a function that checks if a binary tree is full
 * recursively.
 * @tree: pointer to the root node of the tree to check.
 * Return: tree is not full (0), otherwise 1.
 */

int recursivelyFull(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    recursivelyFull(tree->left) == 0 ||
		    recursivelyFull(tree->right) == 0)

			return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full - a function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: tree is NULL or not full (0). Otherwise 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursivelyFull(tree));
}
