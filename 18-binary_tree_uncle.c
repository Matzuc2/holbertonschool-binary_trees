#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent != node->parent->parent->left)
		return (node->parent->parent->left);
	if (node->parent != node->parent->parent->right)
		return (node->parent->parent->right);
	return (NULL);
}
