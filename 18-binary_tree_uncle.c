#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the sibling of a node
 * @node: a pointer to the node to find the uncle
 *
 * If node is NULL return NULL
 * If node has no uncle, return NULL
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node, *uncle;

	if (!node || !node->parent)
		return (NULL);

	parent_node = node->parent;

	if (!parent_node->parent)
		return (NULL);

	if (parent_node->parent->left == parent_node)
		uncle = parent_node->parent->right;
	else
		uncle = parent_node->parent->left;

	return (uncle);
}
