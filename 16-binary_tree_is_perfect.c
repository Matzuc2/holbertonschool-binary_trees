#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t find_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = find_height(tree->left);
	right_height = find_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    return (0);
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, node, i;


    if (tree == NULL)
        return (0);
height = find_height(tree);
node = 1;
for (i = 0; i < height; i++)
	node = node * 2;
node--;
    /*if (tree->right && tree->left)
	return (1);
	if (binary_tree_is_full(tree) != 0 && tree->right && tree->left)
		return (1);*/

	return (binary_tree_is_full(tree) && binary_tree_size(tree) == node);
}
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
