#include "binary_trees.h"

/**
 * binary_tree_nodes - Return number of nodes with at least 1 child
 * @tree: pointer to root of tree
 *
 * Return: size_t number of nodes in tree with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_l, nodes_r, node;

	nodes_l = 0;
	nodes_r = 0;
	node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		nodes_l = binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		nodes_r = binary_tree_nodes(tree->right);
	}
	if (tree->left != NULL || tree->right != NULL)
		node = 1;

	return (nodes_l + nodes_r + node);
}
