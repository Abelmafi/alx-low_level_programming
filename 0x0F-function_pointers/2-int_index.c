#include "function_pointers.h"

/**
 * int_index - it searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer 
 *
 * Return: The index of the first element it does not return 0, or -1
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
