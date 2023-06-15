#include "lists.h"

/**
 * get_dnodeint_at_index - prototype fns that finds a specific node of a linked list
 * @head: variable parameter pointer to the beginning of the list
 * @index: variable parameter index of the node to retrieve
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
/*introducing variable parameter*/
unsigned int t;

/*introducing conditional statement*/
if (!head)
return (NULL);
if (index == 0)
return (head);
for (t = 0; t < index; t++)
{
if (head->next == NULL)
return (NULL);
head = head->next;
}
return (head);
}
