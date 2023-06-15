#include "lists.h"

/**
 * dlistint_len - prototype fns that print length of a dlistint_t list
 * @h: variable parameter pointer to the start of the linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
/*introducing parameters*/
size_t t;

for (t = 0; h != NULL; t++)
h = h->next;
return (t);
}
