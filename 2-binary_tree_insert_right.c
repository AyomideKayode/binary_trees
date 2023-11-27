#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another node.
 * If parent already has right child, new node must take its place,
 * and old right-child must be set as right-child for the new node.
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node, or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL); /* insertion error if parent is NULL */
	}

	if (right_node == NULL)
		return (NULL); /* allocation error */

	right_node->parent = parent;
	right_node->n = value;
	right_node->left = NULL;
	right_node->right = NULL;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
