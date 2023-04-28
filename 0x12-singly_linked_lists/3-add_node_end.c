#include <string.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * 
 * @head: parameter for double pointer to the list_t list
 * @str: parameter for new string to add in the node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*introducing parameter for pointers and variable*/
	list_t *new;
	unsigned int len;
	list_t *temp = *head;

	len = 0;

	/*conditional statement for the function*/
	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}

