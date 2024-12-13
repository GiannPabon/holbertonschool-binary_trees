#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Description:
 * Creates a new node and sets it as the right-child of the  parent node.
 * If the parent already has a right-child,the new node takes its place; the
 * old right-child becomes the right-child of the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /*declare new node*/

	if (parent == NULL) /*check if parent is null*/
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t)); /*allocate new node*/
	if (new_node == NULL) /*check if malloc failed*/
	{
		return (NULL);
	}
	new_node->n = value; /*assign value*/
	new_node->parent = parent; /*assign parent*/
	new_node->right = parent->right; /*assign right*/
	new_node->left = NULL; /*assign left*/
	if (parent->right != NULL) /*check if right is not null*/
	{
		parent->right->parent = new_node; /*assign parent*/
	}
	parent->right = new_node; /*assign right*/
	return (new_node);
}
