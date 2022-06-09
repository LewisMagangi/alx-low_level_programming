#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - find number of nodes in a two way linked list
 * @h: linked list
 *
 * Return: no of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numberof_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		numberof_nodes++;
	}
	return (numberof_nodes);
}
