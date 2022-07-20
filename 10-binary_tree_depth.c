#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node 
 * @tree: is a pointer to the node to measure the depth
 * Return: succes
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deph;

	if(tree == NULL || tree->parent == NULL)
		return (0);
	deph = binary_tree_depth(tree->parent);
	return(deph + 1);
}
