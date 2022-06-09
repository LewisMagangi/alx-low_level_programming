#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print members of a two way linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numberof_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%x\n", current->n);
		current = current->next;
		numberof_nodes++;
	}

	return (numberof_nodes);
}
