#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: node to check
 * Return: returns 1 if node is root and 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
