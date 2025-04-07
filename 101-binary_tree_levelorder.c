#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t	binary_tree_height(const binary_tree_t *tree)
{
	size_t	left_height, right_height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i = 0;
	int bt = binary_tree_height(tree);
	binary_tree_t *treeleft;
	binary_tree_t *tree
	for (i = 0; i < bt; i++)
	{
		print_array(tree, size);
		tree = 
}

void printLevelOrder(const binary_tree_t *tree) {
    int h = binary_tree_height(tree);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

void printCurrentLevel(const binary_tree_t *tree, int level) {
    if (tree == NULL)
        return;
    if (level == 1)
        print_array(size, tree);
    else if (level > 1) {
        printCurrentLevel(tree->left, level - 1);
        printCurrentLevel(tree->right, level - 1);
    }
}
