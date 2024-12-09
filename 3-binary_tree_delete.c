#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description:
 * This function uses a post-order traversal to delete all nodes in a binary
 * tree. It first deletes the left subtree, then the right subtree, and
 * finally frees the current node. If the `tree` pointer is NULL, the
 * function does nothing.
 *
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}

}
