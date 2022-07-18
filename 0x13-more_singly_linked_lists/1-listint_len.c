#include "lists.h"
/**
 * listint_len - count number of lists.
 * @h: linked list head;
 *
 * Return: number of linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
