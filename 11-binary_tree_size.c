#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the depth.
 *
 * If tree is NULL, your function must return 0
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (size);
}
