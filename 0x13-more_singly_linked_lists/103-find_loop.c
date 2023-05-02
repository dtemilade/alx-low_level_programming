#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: parameter to search
* Return: the address of the node where the loop starts
* or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	/*introducing and initializing variable parameter*/
	listint_t *slow = head;
	listint_t *fast = head;

	/*conditional statement for the function*/
	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (slow == fast)
		{
			slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (fast);
		}
	}
	return (NULL);
}
