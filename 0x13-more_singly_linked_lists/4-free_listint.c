#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - define function
  * @head: describe argument
  */
void free_listint(listint_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}
