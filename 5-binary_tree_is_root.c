#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a root, 0 otherwise
 *
 * Description: A root is a node that has no parent. If the node is NULL,
 * it is not considered a root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}

