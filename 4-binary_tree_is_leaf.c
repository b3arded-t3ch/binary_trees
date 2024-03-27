#include "binary_trees.h"

/* 
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * Return: 1 if a leaf, otherwise 0
 * @node: the node to check
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}

	return (0);
}
