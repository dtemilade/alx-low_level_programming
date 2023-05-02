
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * @h: parameter for linked list.
* Return: elements of a linked list
 */
size_t print_listint(const listint_t *h)
{
	/*introducing variables*/
	size_t retval;

	/*initializing variable*/
	retval = 0;
	/*introducing while conditional statement*/
	while (h)
	{
		/*output inside the while conditional statement*/
		printf("%d\n", h->n);
		retval++;
		h = h->next;
	}
	return (retval);
}
