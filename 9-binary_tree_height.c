#include "binary_trees.h"

/**
 * binary_tree_height - return height of binary tree
 * @tree: pointer to root node of tree to measure
 *
 * Return: size_t type height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		l = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		r = binary_tree_height(tree->right) + 1;
	}

	if (r > l)
		return (r);
	else
		return (l);
}
