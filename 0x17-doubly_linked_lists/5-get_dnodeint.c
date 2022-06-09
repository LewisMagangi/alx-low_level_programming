#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node in a linked list.
 * @head: 1st node of a linked list
 * @index: node index to return
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}
