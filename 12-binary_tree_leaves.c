#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * If tree is NULL, your function must return 0
 * A NULL pointer is not a leaf
 *
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count);
}
