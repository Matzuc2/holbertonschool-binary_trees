#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new_root = tree->right;
	tmp = new_root->left;
	new_root->left = tree;
	tree->right = tmp;

	if (tmp != NULL)
		tmp->parent = tree;

	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
