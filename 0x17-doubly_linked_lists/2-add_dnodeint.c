#include "lists.h"

/**
 * add_dnodeint - function that adds a node to the start of the list
 * @head: parameter of pointer 
 * @n: parameter for node index used by history
 *
 * Return: size of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
list_t *new;

/*introducing conditional statement*/
if (!head)
return (NULL);
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
_memset((void *)new, 0, sizeof(list_t));
new->n = n;
if (str)
{
new->str = _strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
}
new->next = *head;
*head = new;
return (new);
}

