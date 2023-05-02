#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a linked list
 * @head: parameter for pointer to the first node in the list
 * @n: parameter for data to insert in that new node
* Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*introducing variables*/
	listint_t *new;

	/*checks and return NULL if it fails*/
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	/*otherwise, return the address of the new element*/
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

