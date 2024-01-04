#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of node
 * @tree: node to measure
 * Return: returns the depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
