#include "lists.h"
/**
 * pop_listint - delete head node.
 * @head: head node.
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if ((*head)->next == NULL)
	{
		i = (*head)->n;
		new = *head;
		free(new);
	}
	else
	{
		new = *head;
		i = new->n;
		*head = (*head)->next;
		free(new);
	}
	return (i);
}
