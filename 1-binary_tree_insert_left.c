#include "binary_trees.h"

/**
 *  binary_tree_insert_left - insert left child to binary tree node
 * @parent: parent node pointer
 * @value: value in new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (!parent->left)
		parent->left = node;
	else
		{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
