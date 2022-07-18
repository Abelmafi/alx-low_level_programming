#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at the nth index.
 * @head: node head.
 * @idx: index.
 * @n: data.
 *
 * Return: new node adress.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i = 1, c = 0;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL)
	{
		return (NULL);
	}
	current = *head;
	if (idx == 0)
	{	new->next = current;
		*head = new;
		return (*head);	}
	while (i <= idx)
	{
		if (i == idx)
		{
			new->next = current->next;
			current->next = new;
			c = 1;
		}
		i++;
		current = current->next;
	}
	if (c == 0)
	{	free(new);
		return (NULL);	}
	return (new);
}



