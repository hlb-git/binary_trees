#include "binary_trees.h"

/**
 * binary_tree_nodes - count tree with at least one node
 * @tree: the tree to count
 * Return: returns the number of tree with at least one node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
