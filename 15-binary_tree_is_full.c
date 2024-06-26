#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * Return: 1, otherwise 0
 * @tree: a pointer to the root node of the tree to check
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left && !tree->right) || (!tree->left && tree->right))
	{
		return (0);
	}
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
	{
		return (1);
	}
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
