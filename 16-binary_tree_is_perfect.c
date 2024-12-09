#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int find_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);
	left_height = find_height(tree->left);
	right_height = find_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = find_height(tree->left);
    right_height = find_height(tree->right);

    if (left_height != right_height)
        return (0);

    if (tree->right && tree->left)
	return (1);

	left_height = binary_tree_is_perfect(tree->left);
	right_height = binary_tree_is_perfect(tree->right);

	return (0);
}

