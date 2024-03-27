#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * Return: 1 if it's a root, otherwise 0;
 * @node: pointer to the node to check
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
