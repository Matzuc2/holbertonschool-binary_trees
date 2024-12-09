#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree in preorder
 *                        and applies a function to each node's value.
 * @tree: Pointer to the root node of the binary tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * Description:
 * This function performs a preorder traversal on a binary tree.
 * In a preorder traversal, the current node is processed first,
 * followed by the left subtree, and then the right subtree.
 * If either `tree` or `func` is NULL, the function does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
