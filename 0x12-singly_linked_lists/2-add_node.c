
lroudge
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
holbertonschool-low_level_programming/0x11-singly_linked_lists/2-add_node.c
@lroudge
lroudge Remove strlen in two tasks
 1 contributor
30 lines (25 sloc)  558 Bytes
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
