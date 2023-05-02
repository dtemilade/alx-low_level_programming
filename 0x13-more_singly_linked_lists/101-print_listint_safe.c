#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - function that counts the number of unique nodes
 * @head: parameter for pointer for checking head of the listint_t.
 * Return: length of nodes or 0 if otherwise.
 */
size_t looped_listint_len(const listint_t *head)
{
	/*introducing variable parameter*/
	const listint_t *a, *b;
	size_t nodes;

	nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
	if (b == a)
	{
	a = head;
	while (b != a)
	{
		nodes++;
		a = a->next;
		b = b->next;
	}
	a = a->next;
	while (b != a)
	{
		nodes++;
		a = a->next;
	}
	return (nodes);
	}
	a = a->next;
	b = (b->next)->next;
	}
	return (0);
}

size_t print_listint_safe(const listint_t *head);
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: parameter for head of the listint_t list.pointer
* Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	/*introducing variable parameter*/
	size_t x, y;

	/*initializing variable parameter*/
	x = 0;
	y = looped_listint_len(head);

	/*conditional statement for the function*/
	if (y == 0)
	{
		for (; head != NULL; y++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (x = 0; y > x; x++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (y);
}
