#include "lists.h"

/**
 * free_listint_safe - function that prints a listint_t linked list.
 * @h: parameter for pointer to first node in linked list
* Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	/*introducing variable parameter*/
	int diff;
	listint_t *index;
	size_t len;

	/*intializing variable parameter*/
	len = 0;

	/*conditional statement for the function*/
	if (!*h || !h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			index = (*h)->next;
			free(*h);
			*h = NULL;
			len++;
		}
		else
		{
			free(*h);
			*h = index;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
