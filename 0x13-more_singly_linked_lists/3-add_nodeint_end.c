#include "lists.h"
/**
 * add_nodeint_end - add node at the end of line.
 * @head: node head.
 * @n: data.
 *
 * Return: new node adress.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = NULL;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL || n == '\0')
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head)
	{
		while (last->next)
		{
			last = last->next;
		}
	}
	if (last)
		last->next = new;
	else
		*head = new;
	return (new);
}



