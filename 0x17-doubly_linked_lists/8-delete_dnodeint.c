#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - fns that deletes a node at a specific index
 * @head: variable parameter double pointer to the linked list
 * @index: variable parameter index at which to delete node
* Return: Always 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
unsigned int t;

/*conditional statement for the program*/
if (!head || !*head)
return (-1);
tmp = *head;
if (index == 0)
{
*head = tmp->next;
if (tmp->next != NULL)
{
tmp->next->prev = NULL;
}
free(tmp);
return (1);
}
for (t = 0; t < index; t++)
{
if (tmp->next == NULL)
return (-1);
tmp = tmp->next;
}
tmp->prev->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
