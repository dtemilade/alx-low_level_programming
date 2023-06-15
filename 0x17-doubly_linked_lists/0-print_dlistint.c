#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prototype fns that print all the elements of a dlistint_t list
 * @h: variable parameter pointer to the start of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
/*introducing parameters*/
size_t t;

for (t = 0; h != NULL; t++)
{
printf("%d\n", h->n);
h = h->next;
}
return (t);
}

