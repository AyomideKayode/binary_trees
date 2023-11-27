#include "binary_trees.h"
/**
 * binary_tree_is_full - checking if the binary tree is full
 * @tree: The tree to be evaluated
 *
 * Return: 1 if the node is a leaf and returning the highest node;
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	right = left = 0;
	if (tree == NULL)
		return (0); /* Return 0 if tree is NULL */

	if (tree->left == NULL && tree->right == NULL)
		return (1); /* If the node is a leaf, it's full by definition */

	if (tree->left == NULL && tree->right != NULL)
		return (0); /* If the node has one child, it's not full */

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (right == 1 && left == 1)
		return (1);
	return (0);
}
