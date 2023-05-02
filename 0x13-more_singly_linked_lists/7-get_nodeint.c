#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: parameter for first node in the linked list
 * @index: is the index of the node, starting at 0
* Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*introducing variable parameter*/
	listint_t *retval = head;
	unsigned int x;

	/*initializing variable parameter*/
	x = 0;

	/*conditional statement for the function*/
	while (retval && x < index)
	{
		retval = retval->next;
		x++;
	}
	/*if the node does not exist, return NULL*/
	return (retval ? retval : NULL);
}

