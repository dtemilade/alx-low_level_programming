#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: parameter to be freed
 */
void free_listint(listint_t *head)
{
	/*introducing variables*/
	listint_t *index;

	while (head)
	{
		index = head->next;

		/*release a linked list*/
		free(head);
		head = index;
	}

}

