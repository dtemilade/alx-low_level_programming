#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - fns that inserts a new node at a given position
 * @h: variable parameter double pointer to the beginning of the linked list
 * @idx: variable parameter index at which to insert the new node
 * @n: variable parameter data to enter into new node
 * Return: the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
/*introducing parameter variable*/
unsigned int t;
dlistint_t *new, *next, *tmp;

if (!h)
return (NULL);
if (idx != 0)
{
tmp = *h;
for (t = 0; t < idx - 1 && tmp != NULL; t++)
tmp = tmp->next;
if (!tmp)
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
if (idx == 0)
{
next = *h;
*h = new;
new->prev = NULL;
}
else
{
new->prev = tmp;
next = tmp->next;
tmp->next = new;
}
new->next = next;
if (new->next != NULL)
new->next->prev = new;
return (new);
}
