#include "binary_trees.h"


/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: is a pointer tot he root node
 * Return: Succes
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}


/**
 * binary_tree_leaves- count the number of leafs in a binary tree
 * @tree: pointer to the root node of the tree to count the number
 * of leaves
 * Return: succes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!(tree))
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
 * binary_tree_is_perfect - determines if binary tree is perfect
 * @tree: pointer to root of tree
 *
 * Return: int 1 if perfect and 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, actual_leaves, perfect_leaves, i;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	actual_leaves = binary_tree_leaves(tree);

	perfect_leaves = 1;
	for (i = 0; i < height; i++)
	{
		perfect_leaves = perfect_leaves * 2;
	}

	if (perfect_leaves == actual_leaves)
		return (1);
	else
		return (0);
}
