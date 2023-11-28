#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL); /*Return NULL if node, parent, or grandparent is NULL*/

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
	{
		return (grandparent->right);
		/* Return right child of grandparent if parent is left child */
	}
	else if (grandparent->right == node->parent)
	{
		return (grandparent->left);
	}
	return (NULL);
}
