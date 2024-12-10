#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node != node->parent->right)
		return (node->parent->right);
	if (node != node->parent->left)
		return (node->parent->left);
	return (NULL);
}
