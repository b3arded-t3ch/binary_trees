#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * Return: the balance factor
 * @tree: a pointer to the root node of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_f = 0;

	if (tree == NULL)
		return (0);

	bal_f += binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (bal_f);


}
