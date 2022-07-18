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
	listint_t *current, *new, *temp;
	unsigned int i = 1;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (*head == NULL)
	{	free(new);
		return (NULL);	}
	current = *head;
	if (idx == 0)
	{	new->next = current;
		return (new);	}
	while (current)
	{
		if (i == idx)
		{
			if (current->next == NULL)
			{
				new = malloc(sizeof(listint_t));
				current->next = new;
				new->n = n;
				return (new);
			}
			temp = current->next;
			new = malloc(sizeof(listint_t));
			current->next = new;
			new->next = temp;
			new->n = n;
			break;
		}
		i++;
		current = current->next;
	}
	if (new == NULL)
	{	free(new);
		return (NULL);	}
	return (new);
}



