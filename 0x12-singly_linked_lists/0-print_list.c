#include <stdio.h>

#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: parameter for pointer to the list_t list
* Return: elements of the function
 */

size_t print_list(const list_t *h)
{
	size_t retval = 0;

	while (h)
	{
		/*If str is NULL, print [0] (nil)*/
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		retval++;

	}
	return (retval);
}

