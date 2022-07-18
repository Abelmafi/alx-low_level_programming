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

	new = *head;
	if (new->next == NULL)
		free(new);
	else
	{
		temp = (*head)->next;
		new->next = NULL;
		*head = temp;
		free(new);
	}
	return (new->n);
}
