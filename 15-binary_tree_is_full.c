#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier
 *
 * Description: Cette fonction vérifie si un arbre binaire est plein.
 * Un arbre binaire est considéré comme plein si chaque
 * nœud a soit 0 soit 2 enfants.
 *
 * Return: 1 si l'arbre est plein, 0 sinon ou si tree est NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int size = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right && tree->parent)
	size++;
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	return (size);
}
