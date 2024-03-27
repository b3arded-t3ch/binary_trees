#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * Return: count of the node with at least 1 child
 * @tree: root of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t is_parent = 0;

	if (tree == NULL)
		return (0);

	is_parent += (!tree->parent) ? 0 : 1;
	is_parent += binary_tree_nodes(tree->left);
	is_parent += binary_tree_nodes(tree->right);

	return (is_parent);
}
