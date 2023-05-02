#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: parameter for pointer to the first node in the list
 * Return: parameter for pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	/*introducing variable parameter*/
	listint_t *prev;
	listint_t *next;

	/*initializing variable parameter*/
	prev = NULL;
	next = NULL;

	/*conditional statement for the function*/
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
