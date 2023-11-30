#include "binary_trees.h"

/**
 * find_depth - compare size
 *
 * @tree: pointer to the root
 * Return: size
 */
int find_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_depth(tree->left) + 1 + find_depth(tree->right));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if ((h_left - h_right) == 0)
		return (1);
	return (0);
}
