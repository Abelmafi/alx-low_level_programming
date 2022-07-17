#include "lists.h"
/**
 * free_list - free all lists.
 * @head: current place in the list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last->str);
		free(last);
	}
}
