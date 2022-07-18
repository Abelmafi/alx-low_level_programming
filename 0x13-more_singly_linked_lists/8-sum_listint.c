#include "lists.h"
/**
 * sum_listint - find node with nth index
 * @head: head node.
 *
 * Return: indexed node.
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int i = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
