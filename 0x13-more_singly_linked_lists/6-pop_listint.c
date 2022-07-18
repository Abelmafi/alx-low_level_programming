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

	new = *head;
	if (new->next == NULL)
		free(new);
	else
	{
		new->next = NULL;
		*head = (*head)->next;
	}
	return (new->n);
}
