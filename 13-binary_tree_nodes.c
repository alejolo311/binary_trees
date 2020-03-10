#include "binary_trees.h"

/**
 * binary_tree_nodes - how many nodes
 * @tree: tree
 * Return: number of noder
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    int nodes;
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
    {
        nodes = 1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
        return (nodes);
    }
	return (0);
}