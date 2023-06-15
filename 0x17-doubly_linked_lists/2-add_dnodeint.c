#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a node to the start of the list
 * @head: variable parameter double pointer to the beginning of the linked list
 * @n: variable parameter value to add to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
/*introducing parameters*/
dlistint_t *new;

/*introducing conditional statement*/
if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;
if (new->next != NULL)
(new->next)->prev = new;
return (new);
}
