#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node - function that  adds a new node at the beginning of a linked list
 *
 * @head: parameter for double pointer to the list_t list
 * @str: parameter for new string to add in the node
* Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/*introducing variable parameter*/
	unsigned int l;
	list_t *retval;

	/*initializing variable parameter*/
	l = 0;

	/*conditional statement for the function*/
	while (str[l])
		l++;

	retval = malloc(sizeof(list_t));
	if (!retval)
		return (NULL);
	retval->str = strdup(str);
	retval->len = l;
	retval->next = (*head);
	(*head) = retval;
	return (*head);
}
