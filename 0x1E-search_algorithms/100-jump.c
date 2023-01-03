#include <stdio.h>
#include "search_algos.h"
#include <math.h>
/**
 * min - check and return the min value of two numbers
 * @a: the firest number to be chacked
 * @b: second number
 * Return: min value of tw0 number
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0;

	if (!array)
		return (-1);

	while (array[min(step, size)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (step >= size)
			break;
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (array[prev] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (prev == min(step, size))
			return (-1);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
