#include "binary_trees.h"

/**
 * binary_tree_inorder - print tree in inorder traversal
 * @tree: pointer to root of tree
 * @func: pointer to function
 *
 * Return: no return value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
