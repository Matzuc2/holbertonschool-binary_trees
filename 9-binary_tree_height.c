#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer
 *
 * Description: Cette fonction calcule récursivement la hauteur d'un arbre
 * binaire. La hauteur est définie comme le nombre d'arêtes sur le chemin
 * le plus long du nœud racine à une feuille.
 *
 * Return: La hauteur de l'arbre. Si l'arbre est NULL, retourne 0.
 */
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
