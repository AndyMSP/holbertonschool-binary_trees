#include "binary_trees.h"

/**
 * binary_tree_size - Return size (number of nodes) in tree
 * @tree: pointer to root of tree
 *
 * Return: size_t number of nodes in tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	size_l = 0;
	size_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		size_l = binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		size_r = binary_tree_size(tree->right);
	}

	return (size_l + size_r + 1);
}
