#include "lists.h"

/**
 * sum_dlistint - prototype fns that sums all of the data of a dlistint_t linked list
 * @head: variable parameter pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0 tf the list ts empty
 */
int sum_dlistint(dlistint_t *head)
{
int retval;

retval = 0;
while (head)
{
retval += head->n;
head = head->next;
}
return (retval);
}
