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
 * size_helper - Measures the size of a binary tree
 * @tree: Pointer to the node
 *
 * Return: Size of the tree
 */

static size_t size_helper(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (1 + size_helper(tree->left) + size_helper(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, expected_size, actual_size, i;

	if (!tree)
	{
		return (0);
	}

	height = height_helper(tree);
	expected_size = 1;

	for (i = 0; i <= height; i++)
	{
		expected_size <<= 1;
	}

	expected_size -= 1;
	actual_size = size_helper(tree);
	return (actual_size == expected_size);
}

