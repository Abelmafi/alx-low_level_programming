#include "lists.h"
/**
 * delete_nodeint_at_index - find node with nth index and delete
 * @head: head node.
 * @index: index number
 *
 * Return: indexed node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i < (index - 1))
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	temp = current->next;
	current->next = current->next->next;
	free(temp);
	return (1);
}
