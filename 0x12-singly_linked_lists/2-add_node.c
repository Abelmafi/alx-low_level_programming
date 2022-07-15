#include "lists.h"
/**
  * _strlen - string length
  * @s: input char
  * Return: string length
**/
int _strlen(const char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds new nodes to the end of the list.
 * @head: new head adress
 * @str: string to add
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *aux;

	aux = *head;
	if (*head)
	{
		while (aux->next)
		{
		aux = aux->next;
		}
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		printf("Error\n");
		free(new_node);
		return (0);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (aux)
	aux->next = new_node;
	else
	*head = new_node;
	return (new_node);
}
