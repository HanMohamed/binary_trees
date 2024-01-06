#include "binary_trees.h"

/**
 * binary_tree_height_branch - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * If tree is NULL, your function must return 0
 *
 * Return: height of tree
 */
size_t binary_tree_height_branch(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);

	height_left = 1 + binary_tree_height_branch(tree->left);
	height_right = 1 + binary_tree_height_branch(tree->right);

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * If tree is NULL, the function must return 0
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;

	if (!tree)
		return (0);


	balance_factor = binary_tree_height_branch(tree->left)
			- binary_tree_height_branch(tree->right);

	return (balance_factor);
}
