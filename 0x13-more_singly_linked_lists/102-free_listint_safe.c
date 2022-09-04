#include "lists.h"
/**
 * free_listint_safe - free linked lists with and without loop.
 * @h: linked list head.
 *
 * Return: number of freed linked lists.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *fast = *h, *slow = *h;
	int n = 0;

	if (*h == NULL)
		return (0);
	slow = slow->next;
	fast = fast->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow->next != fast)
			{
				slow = slow->next;
			}
			slow->next = NULL;
			break;
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	while (*h)
	{
		slow = *h;
		*h = (*h)->next;
		n++;
		free(slow);
	}
	h = NULL;
	return (n);
}
