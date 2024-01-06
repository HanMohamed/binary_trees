#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		sibling = node->parent->right;
	else if (node->parent->right == node)
		sibling = node->parent->left;
	else
		sibling = NULL;

	return (sibling);
}
