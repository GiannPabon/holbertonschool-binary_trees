#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the new node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /*declare new node*/

	new_node = malloc(sizeof(binary_tree_t)); /*allocate new node*/
	if (new_node == NULL) /*check if malloc failed*/
	{
		return (NULL);
	}
	new_node->n = value; /*set value*/
	new_node->parent = parent; /*set parent*/
	new_node->left = NULL; /*set left*/
	new_node->right = NULL; /*set right*/
	return (new_node);
}
