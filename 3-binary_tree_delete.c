#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: pointer to root of binary tree
 *
 * Return: no return value
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL || tree->right != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}

	free(tree);
}
