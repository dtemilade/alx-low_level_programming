#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: parameter for pointer
 * @index: parameter for index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*introducing variable parameter*/
	unsigned int i;
	listint_t *t_node = *head;
	listint_t *tval = NULL;


	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t_node);
		return (1);
	}
	while (i < index - 1)
	{
		if (!(t_node->next) || !t_node)
			return (-1);
		t_node = t_node->next;
		i++;
	}

	tval = t_node->next;
	t_node->next = tval->next;
	free(tval);
	return (1);
}
