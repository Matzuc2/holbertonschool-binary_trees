#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);
	if (tree->right)
	{
		height = 1 + binary_tree_height(tree->right);
	}
	if (tree->left)
        {
                height = 1 + binary_tree_height(tree->left);
        }
	return (height);
}
