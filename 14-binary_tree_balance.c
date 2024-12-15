#include "binary_trees.h"

/**
 * height_helper - measures the height of a binary tree
 * @tree: pointer to the node
 *
 * Return: height of the tree
 */
static size_t height_helper(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
	{
		return (0);
	}

	left_h = height_helper(tree->left);
	right_h = height_helper(tree->right);

	/* The height of a leaf node is now 1 */
	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor (left_height - right_height), or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left_h = (int)height_helper(tree->left);
	}
	if (tree->right)
	{
		right_h = (int)height_helper(tree->right);
	}

	return (left_h - right_h);
}

