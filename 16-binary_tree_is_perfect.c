#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * If tree is NULL, your function must return 0
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	height_left = 1 + binary_tree_height(tree->left);
	height_right = 1 + binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * If tree is NULL, your function must return 0
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left)
		!= binary_tree_height(tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
