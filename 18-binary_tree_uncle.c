#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: pointer to node in binary tree
 *
 * Return: pointer to sibling or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par, *sib;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	par = node->parent;

	if (par->left == NULL || par->right == NULL)
		return (NULL);

	if (par->left == node)
		sib = par->right;
	if (par->right == node)
		sib = par->left;

	return (sib);
}


/**
 * binary_tree_uncle - return pointer to uncle of node
 * @node: pointer to node in binary tree
 *
 * Return: pointer to uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *par, *unc;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	par = node->parent;

	unc = binary_tree_sibling(par);

	return (unc);
}
