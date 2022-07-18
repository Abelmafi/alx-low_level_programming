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
		new = NULL;
	else
	{
		temp = new->next;
		new->next = NULL;
		*head = temp;
	}
	return (new->n);
}
