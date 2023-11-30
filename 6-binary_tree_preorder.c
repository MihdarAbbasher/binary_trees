#include "binary_trees.h"

/** binary_tree_preorder - del BT
 * @tree: root pointer
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_preorder(tree->left, (*func)((tree->left)->n));
	if (tree->right)
		binary_tree_preorder(tree->right, (*func)((tree->right)->n));
	(*func)(tree->n);
}
