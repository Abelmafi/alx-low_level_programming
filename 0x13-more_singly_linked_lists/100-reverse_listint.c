#include "lists.h"
/**
 * reverse_listint - reverses linked list.
 * @head: head.
 *
 * Return: the frist node of reversed list.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (*head)
	{
		prev = *head;
		current = (*head)->next;
		*head = (*head)->next;
		prev->next = NULL;
		while (*head != NULL)
		{
			*head = (*head)->next;
			current->next = prev;
			prev = current;
			current = *head;
		}
		*head = prev;
	}
	return (*head);
}
