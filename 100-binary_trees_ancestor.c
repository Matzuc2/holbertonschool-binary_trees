#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);
	ancestor = binary_trees_ancestor(first->parent, second->parent);
	return (ancestor);
}
