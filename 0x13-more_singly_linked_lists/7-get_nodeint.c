#include "lists.h"
/**
 * get_nodeint_at_index - find node with nth index
 * @head: head node.
 * @index: index number
 *
 * Return: indexed node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	current = head;
	while (i <= index)
	{
		if (current == NULL)
			return (NULL);
		if (i == index)
			temp = current;
		current = current->next;
		i++;
	}
	return (temp);
}
