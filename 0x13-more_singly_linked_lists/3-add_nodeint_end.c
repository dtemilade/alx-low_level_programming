#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: parameter for pointer to the first element
 * @n: parameter for data to insert into the new element
* Return: the address of the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*introducing variables*/
	listint_t *index = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	/*checks and return NULL if it fails*/
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/*checks and add head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (index->next)
		index = index->next;
	index->next = new;

	return (new);
}

