#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is leaf
 * @node: node pointer
 * Return: 1 if node is leaf, 0 other wise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
