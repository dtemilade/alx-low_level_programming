#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: parameter for first node in the linked list
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	/*introducing variable parameter*/
	listint_t *index = head;
	int sum;

	/*initializing variable parameter*/
	sum = 0;

	/*conditional statement for the function*/
	while (index)
	{
		sum = sum + index->n;
		index = index->next;
	}

	return (sum);
}
