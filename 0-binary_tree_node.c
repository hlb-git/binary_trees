#include "binary_trees.h"

/**
 * binary_tree_node - function to create new tree node
 * @parent: parent node of the tree
 * @value: value to insert in the node
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent)
		new_node->parent = parent;
	if (value)
		new_node->n = value;

	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

