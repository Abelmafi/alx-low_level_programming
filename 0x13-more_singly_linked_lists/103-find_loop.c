#include "lists.h"
/**
 * find_listint_loop - finds the pointer where the sloop start if there is loop
 * @head: head pointer.
 *
 * Return: loop starting pointer or null if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL)
		return (NULL);
	slow = slow->next;
	fast = fast->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
