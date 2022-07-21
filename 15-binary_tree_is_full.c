#include "binary_trees.h"

/**
 * binary_tree_is_full - determines if binary tree is full
 * @tree: pointer to root node of tree
 *
 * Return: int 1 if full or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);
	return (0);
}
