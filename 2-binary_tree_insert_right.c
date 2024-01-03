#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to the right of the parent node
 * @parent: parent node to insert into
 * @value: value to insert into n
 * Return: returns the just created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	else
		parent->right = new_node;
	return (parent->right);
}
