#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least
 * one child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Description: This function recursively counts the number of nodes that have
 * at least one child in a binary tree. A node is considered to have a child
 * if either its left or right pointer is not NULL.
 *
 * Return: The number of nodes with at least one child in the tree.
 *         If tree is NULL, the function returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_nodes(tree->left);
	right_height = binary_tree_nodes(tree->right);

	return (1 + right_height + left_height);
}
