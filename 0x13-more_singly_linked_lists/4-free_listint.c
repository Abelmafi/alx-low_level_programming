#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - define function
  * @head: describe argument
  */
void free_listint(listint_t *head)
{
	listint_t *last;

	for (last = head; last->next; last = last->next)
		free(last);
}
