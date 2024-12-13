#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t **queue = malloc(sizeof(*queue) * 1024);
	int front = 0, rear = 0;
	int flag = 0;

	if (!tree)
		return (0);

	queue[rear++] = tree;
	while (front < rear)
	{
		const binary_tree_t *node = queue[front++];

		if (node->left)
		{
			if (flag)
			{
				free(queue);
				return (0);
			}
			queue[rear++] = node->left;
		}
		else
			flag = 1;

		if (node->right)
		{
			if (flag)
			{
				free(queue);
				return (0);
			}
			queue[rear++] = node->right;
		}
		else
			flag = 1;
	}
	free(queue);
	return (1);
}
