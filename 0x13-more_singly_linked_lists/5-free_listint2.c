#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: parameter for the pointer
 */
void free_listint2(listint_t **head)
{
	/*introducing variables*/
	listint_t *index;

	/*checks and return NULL if it fails*/
	if (head == NULL)
		return;

	/*introducing conditional statement*/
	while (*head)
	{
		index = (*head)->next;
		free(*head);
		*head = index;
	}

	*head = NULL;
}

