#include "lists.h"
/**
 * print_listint_safe - print linked list with and withoutloop.
 * @head: linked list head pointer.
 *
 * Return: number of linked list nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head, *slow = head;
	int n = 0;

	if (head == NULL)
		exit(98);
	slow = slow->next;
	fast = fast->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			while (head != fast)
			{	printf("[%p] %d\n", (void *)head, head->n);
				n++;
				head = head->next;
				fast = fast->next;	}
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			n++;
			while (head != fast)
			{	printf("[%p] %d\n", (void *)head, head->n);
				n++;
				head = head->next;	}
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (n);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow != fast)
	{
		while (head)
		{	printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			n++;	}
	}
	return (n);
}
