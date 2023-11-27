#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth); /* Return 0 if tree is NULL */

	if (tree->parent == NULL)
		return (depth); /* Root node has depth 0 */

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

/**
 * Alte - another solution
 * Description: An alternative recursive method like Task 9 is
 * size_t binary_tree_depth(const binary_tree_t *tree) {
 * if (tree == NULL) {
 * return 0;  // Return 0 if tree is NULL
 * }
 * if (tree->parent == NULL) {
 * return 0;  // Root node has depth 0
 * }
 * return (1 + binary_tree_depth(tree->parent));
 * }
*/
