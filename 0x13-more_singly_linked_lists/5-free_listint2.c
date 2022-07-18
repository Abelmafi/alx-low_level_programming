#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - define function
  * @head: describe argument
  */
void free_listint2(listint_t **head)
{
	listint_t *last, *temp;

	if (head)
	{
		temp = *head;
		while (temp)
		{
			last = temp;
			temp = temp->next;
			free(last);
		}
		*head = NULL;
	}
	else
		return;

}
