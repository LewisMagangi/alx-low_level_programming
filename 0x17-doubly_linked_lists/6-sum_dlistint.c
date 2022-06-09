#include "lists.h"

/**
 * sum_dlistint - find sum of membersof a linked list
 * @head: 1st node of linked list
 * Return: sum of members
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
