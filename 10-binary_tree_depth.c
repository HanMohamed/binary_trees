#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure the depth.
 *
 * If tree is NULL, your function must return 0
 *
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
