#include "binary_trees.h"

/**
 * binary_tree_node - a function to create a binary tree node
 * 
 * Return: the created node
 * @parent: pointer to the parent of the new node
 * @value: the data content of the node
 */


*binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;
	NewNode = malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->parent = parent;

	return (NewNode);
}
