#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /*declare new node*/

	if (parent == NULL) /*check if parent is null*/
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t)); /*alloctate new node*/
	if (new_node == NULL) /*check if malloc failed*/
	{
		return (NULL);
	}
	new_node->n = value; /*assign value*/
	new_node->parent = parent; /*assign parent*/
	new_node->left = parent->left; /*assign left*/
	new_node->right = NULL; /*assign right*/
	if (parent->left != NULL) /*check if left is not null*/
	{
		parent->left->parent = new_node; /*assign parent*/
	}
	parent->left = new_node; /*assign left*/

	return (new_node);
}
