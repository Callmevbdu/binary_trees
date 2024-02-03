#include "binary_trees.h"

/**
 * binary_tree_depth - a function that calculates the depth of a node in a
 * binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: tree is NULL (0), otherwise return the tree depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}