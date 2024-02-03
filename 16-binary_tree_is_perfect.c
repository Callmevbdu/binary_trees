#include "binary_trees.h"

unsigned char isLeaf(const binary_tree_t *node);
size_t nodeDepth(const binary_tree_t *tree);
const binary_tree_t *getLeaf(const binary_tree_t *tree);
int recursivelyPerfect(const binary_tree_t *tree,
		size_t leafDepth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * isLeaf - a function that checks if a node is a leaf of a binary tree.
 * @node: pointer to check.
 * Return: node is a leaf (1), otherwise 0.
 */

unsigned char isLeaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * nodeDepth - a function that returns the depth of a given node in a binary
 * tree.
 * @tree: pointer to measure.
 * Return: The depth of the node.
 */

size_t nodeDepth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + nodeDepth(tree->parent) : 0);
}

/**
 * getLeaf - a function that gets a leaf from a binary tree.
 * @tree: pointer to the root node.
 * Return: pointer to the first found leaf.
 */

const binary_tree_t *getLeaf(const binary_tree_t *tree)
{
	if (isLeaf(tree) == 1)
		return (tree);

	return (tree->left ? getLeaf(tree->left) : getLeaf(tree->right));
}

/**
 * recursivelyPerfect - a function that checks if a binary tree is perfect
 * recursively.
 * @tree: pointer to the root node.
 * @leafDepth: depth of the leaf.
 * @level: level of node.
 * Return: tree is perfect (1), otherwise 0.
 */

int recursivelyPerfect(const binary_tree_t *tree,
		size_t leafDepth, size_t level)
{
	if (isLeaf(tree))
		return (level == leafDepth ? 1 : 0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (recursivelyPerfect(tree->left, leafDepth, level + 1) &&
		recursivelyPerfect(tree->right, leafDepth, level + 1));
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: tree is NULL or not perfect (0), otherwise 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursivelyPerfect(tree, nodeDepth(getLeaf(tree)), 0));
}
