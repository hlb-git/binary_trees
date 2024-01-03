#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left of the parent node
 * @parent: parent node to insert into
 * @value: value to insert into n
 * Return: returns the just created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	else
		parent->left = new_node;
	return (parent->left);
}
