#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a position.
 * @head: parameter for pointer to the first node in the list
 * @idx: parameter for index where the new node is added
 * @n: parameter for data to insert in the new node
* Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*introducing variable parameter*/
	listint_t *new;
	unsigned int i;
	listint_t *index = *head;

	/*initializing variable parameter*/

	new = malloc(sizeof(listint_t));

	/*conditions for return NULL */
	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/*conditional statement for the function*/
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; index && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = index->next;
			index->next = new;
			return (new);
		}

		/*impossible to add node?, return null*/
		else
			index = index->next;
	}
	return (NULL);
}
