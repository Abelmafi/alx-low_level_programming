#include "lists.h"
/**
 * print_listint_safe - print linked list with and withoutloop.
 * @head: linked list head pointer.
 *
 * Return: number of linked list nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *print = head, *fast = head, *slow = head;
	int n = 0;

	if (head == NULL)
		exit(98);
	slow = slow->next;
	fast = fast->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			while (print != fast)
			{
				printf("[%p] %d\n", print, print->n);
				n++;
				print = print->next;
				fast = fast->next;
			}
			printf("[%p] %d\n", print, print->n);
			print = print->next;
			n++;
			while (print != fast)
			{
				printf("[%p] %d\n", print, print->n);
				n++;
				print = print->next;
			}
			printf("-> [%p] %d\n", print, print->n);
			n++;
			return (n);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow != fast)
	{
		print = head;
		while (print)
		{
			printf("[%p] %d\n", print, print->n);
			print = print->next;
			n++;
		}
		return (n);
	}
}
/* METHOD - 2 */
/**
 * size_t print_listint_safe(listint_t *head)
 * {
 *	listint_t *nex;
 *	listint_t *tmp;
 *
 *	tmp = malloc(sizeof(listint_t));
 *	if (tmp == NULL)
 *		return (0);
 *	while (head)
 *	{
 *		printf("%d\n", head->n);
 *		if (head->next == NULL)
 *			break;
 *		if (head->next == tmp)
 *			break;
 *		nex = head->next;
 *		head->next = tmp;
 *		head = nex;
 *	}
 *}
 */
