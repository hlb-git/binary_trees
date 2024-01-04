#include "binary_trees.h"

/**
 * binary_tree_postorder- traverses tree in postorder method
 * @tree: tree to traverse
 * @func: pointer to a function at each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	func(tree->n);
	binary_tree_postorder(tree->right, func);
}
