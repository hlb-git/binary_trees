#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf node
 * @node: tree to check
 * Return: returns 1 if node and 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
