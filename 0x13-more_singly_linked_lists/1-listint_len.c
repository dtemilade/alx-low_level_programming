#include "lists.h"

/**
 * listint_len - function that  returns the nos of elements in a linked lists
 * @h: parameter for linked list of type listint_t to traverse
* Return: number of in a linked lists
 */
size_t listint_len(const listint_t *h)
{
	/*introducing variables*/
	size_t retval;

	/*initializing variable*/
	retval = 0;
	/*introducing while conditional statement*/
	while (h)
	{
		retval++;
		h = h->next;
	}
	return (retval);
}
