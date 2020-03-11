#include "binary_trees.h"

/**
 * binary_tree_leaves - how many leaves
 * @tree: tree
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves;

	if (tree != NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (leaves);
}
