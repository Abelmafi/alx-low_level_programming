#include "lists.h"

/**
 * insert_dnodeint_at_index - insert not at the index position
 * @h: linkedlist head pointer
 * @idx: insertion index
 * @n: node value
 *
 * Return: new linked list pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int num = 0;

	if (!h)
		return (NULL)
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL)
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
	}
	idx--;
	while (num < idx && current)
	{
		current = current->next;
		num++;
	}
	if (current == NULL)
		return (NULL);
	else
	{
		new->next = current->next;
		current->next = new;
		new->prev = current;
		if (new->next != NULL)
			new->next->prev = new;
	}
	return (new);
}
