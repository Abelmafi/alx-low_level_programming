#include "lists.h"
/**
 * add_nodeint - add node at the begining of list
 * @head: head node.
 * @n: data.
 * Return: new node adress.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL || n == '\0')
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}


