#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a node to the end of the list
 * @head: variable parameter double pointer to the beginning of the linked list
 * @n: variable parameter value to add to new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *node;

/*introducing conditional statement*/
if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
node = *head;
while (node->next != NULL)
node = node->next;
node->next = new;
new->prev = node;
return (new);
}
