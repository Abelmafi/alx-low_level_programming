#include "lists.h"
/**
 * pop_listint - delete head node.
 * @head: head node.
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *new, *temp;
	int i;

	new = *head;
	if (new->next == NULL)
	{
		i = new->n;
		free(new);
	}
	else
	{
		i = new->n;
		temp = (*head)->next;
		new->next = NULL;
		*head = temp;
		free(new);
	}
	return (i);
}
