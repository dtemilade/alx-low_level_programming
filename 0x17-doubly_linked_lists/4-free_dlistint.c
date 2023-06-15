#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees all nodes of a list
 * @head: variable parameter pointer to the beginning of the linked list
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next;

/*introducing conditional statement*/
while (head)
{
next = head->next;
free(head);
head = next;
}
}
