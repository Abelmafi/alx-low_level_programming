#include "lists.h"
/**
 * print_listint - print linked list elements.
 * @h: head element.
 *
 * Return: number of elements.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
