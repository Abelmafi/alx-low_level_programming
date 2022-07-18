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

	if (*head == NULL)
		return (NULL);
	current = *head;
	while (current)
	{
		if (i == idx)
		{
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
		return (NULL);
	return (new);
}



