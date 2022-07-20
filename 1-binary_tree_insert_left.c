#include "binary_trees.h"

/**
 * binary_tree_insert_left- add a node to the left
 * @parent: first node
 * @value: value inside a node
 * Return: success
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if(!(parent))
		return (NULL);

	left_node = binary_tree_node(parent, value);
	if (!(left_node))
		return (NULL);

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}
