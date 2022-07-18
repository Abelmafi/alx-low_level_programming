#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - define function
  * @head: describe argument
  */
void free_listint(listint_t *head)
{
	for (; head->next != NULL; head = head->next);
		free(head);
}
