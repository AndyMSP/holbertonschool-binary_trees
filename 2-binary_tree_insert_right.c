#include "binary_trees.h"

/**
 * binary_tree_insert_right - add a node to the right
 * @parent: first node
 * @value: value inside a node
 * Return: success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (!(parent))
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (!(right_node))
		return (NULL);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
