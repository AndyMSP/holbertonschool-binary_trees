#include "binary_trees.h"

/**
 * binary_tree_node- creates a new binary tree
 * @parent: first node
 * @value: data that is inside the nodes
 * return: success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (!(tmp))
		return (NULL);

	else
	{
		tmp->parent = parent;
		tmp->left = tmp->right = NULL;
		tmp->right = NULL;
		tmp->n = value;
		return (tmp);
	}
}
