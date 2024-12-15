#include "binary_trees.h"

/**
 * height_helper - Measures the height of a binary tree
 * @tree: Pointer to the node
 *
 * Return: Height of the tree
 */

static size_t height_helper(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
	{
		return (0);
	}

	left_h = tree->left ? 1 + height_helper(tree->left) : 0;
	right_h = tree->right ? 1 + height_helper(tree->right) : 0;
	return ((left_h > right_h) ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor, or 0 if tree is NULL
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

