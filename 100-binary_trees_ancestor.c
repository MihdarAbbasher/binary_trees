#include "binary_trees.h"

/**
 * binary_treeanc2estor - Finds the lowest ancestor
 * @first: Pointer1
 * @second: Pointer2
 * Return: Pointer to ancestor
 */
binary_tree_t *binary_treeanc2estor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *anc1, *anc2;

	for (anc1 = first; anc1; anc1 = anc1->parent)
		for (anc2 = second; anc2; anc2 = anc2->parent)
			if (anc1 == anc2)
				return ((binary_tree_t *)anc1);
	return (NULL);
}
