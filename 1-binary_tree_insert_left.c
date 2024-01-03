#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left of the parent node
 * @parent: parent node to insert into
 * @value: value to insert into n
 * Return: returns the just created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent)
		return (NULL);
	if (parent->left)
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp;
	}
	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
