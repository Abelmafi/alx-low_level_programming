#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	char i;
	struct node *next;
} node;
void init_queue(queue *h)
{
	h->head = NULL;
	h->tain = NULL;
}
typedef struct
{
	char *head;
	char *tail;
} queue;
bool push(queue *h, char s)
{
	node *new;
	new = malloc(sizeof(node));
	new->i = s;
	new->next = NULL;
	if (h->tail != NULL)
		h->tail->next = new;
	h->tail = new;
	if (h->head == NULL)
		h->head = new;
	return (true);
}
char pop(queue *h)
{
	if (h->head == NULL)
		return ('1');
	node *tmp = h->head;
	char result = tmp->i;
	h->head = h->head->next;
	if (h->head == NULL)
		h->tail = NULL;
	free(tmp);
	return (result);
}
int main(int *argc, char *argv)
{
	queue h;
	int i = 2;

	init_queue(h);
	if (argv[1] == "push")
	{
		while (i < argc)
		{
			push(&h, argv[i]);
			i++;
		}
		while (h)
		{
			printf("%c\n", h->head->i);
			h->head = h->head->next;
		}
	}
	if (argv[1] == "pop")
	{
		char c = pop();
		printf("%c\n", c);
	}
	return (0);
}
