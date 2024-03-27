#include "binary_trees.h"

/*
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * Return: a pointer to the created node
 * @parent: pointer to the new node
 * @value: data content of the node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *left_Node;
	left_Node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		left_Node->left = parent->left;
		parent->left->parent = left_Node;
	}
	parent->left = left_Node;

	return (left_Node);
}
