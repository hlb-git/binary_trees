#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leave nodes
 * @tree: the tree to count the nodes
 * Return: returns the value of the leave nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	leaf = left + right;
	return (!left && !right ? leaf + 1 : leaf + 0);

}
