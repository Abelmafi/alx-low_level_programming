#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
 * min - check and return the min value of two numbers
 * @a: the firest number to be chacked
 * @b: second number
 * Return: min value of tw0 number
 */
size_t minn(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
/**
 * jump_list - searches for a value in a sorted single list of integers using
 * the Jump search algorithm.
 * @list: is a pointer to the first element of the singly linked list to search
 * @size: is the number of elements in list
 * @value: is the value to search for
 * Return: the pointer where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), prev_index = 0, i;
	listint_t *front, *prev;

	if (!list || !list->n)
		return (NULL);
	front = prev = list;
	for (i = 0; i < sqrt(size); i++)
		front = front->next;
	while (front->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", front->index, front->n);
		prev_index = step;
		prev = front;
		step += sqrt(size);
		if (step >= size - 1)
		{
			for (i = 0; i < (size - prev_index - 1); i++)
				front = front->next;
			break;
		}
		for (i = 0; i < sqrt(size); i++)
			front = front->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", front->index, front->n);
	printf("Value found between indexes [%ld] and", prev_index);
	printf(" [%ld]\n", minn(step, size - 1));
	while (prev_index <= minn(step, size - 1) && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->next)
			prev = prev->next;
		prev_index++;
	}
	if (prev->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
