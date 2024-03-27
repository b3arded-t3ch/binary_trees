#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t left_h;
	size_t right_h;

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	retun 1 + (left_h > right_h ? left_h : right_h);
}
