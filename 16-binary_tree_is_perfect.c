#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL, or the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);
	return (right_h);
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
