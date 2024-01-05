#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 *
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	count = binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right) + 1;

	return (count);
}
