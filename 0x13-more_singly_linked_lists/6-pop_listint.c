#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: parameter for the pointer
* Return: deleted elements’ data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	/*introducing variable parameter*/
	int retval;
	listint_t *index;

	/*return 0 if the list is empty*/
	if (!*head || !head)
		return (0);

	/*otherwise return deleted elements’ data*/
	index = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = index;

	return (retval);
}

