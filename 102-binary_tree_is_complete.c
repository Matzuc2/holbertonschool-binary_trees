#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left && tree->right)
		return (0);
	if (binary_tree_is_complete(tree->left) &&
		binary_tree_is_complete(tree->right))
		return (1);
	return (0);
}
