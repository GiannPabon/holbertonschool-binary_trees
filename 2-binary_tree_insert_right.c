#include "binary_trees.h"

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
