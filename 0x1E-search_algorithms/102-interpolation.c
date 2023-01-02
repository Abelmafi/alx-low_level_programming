#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation - searches for a value in a sorted array of integers using
 * the interpolation search recursive algorithm.
 * @a: is a pointer to the first element of the array to search in
 * @lo: is lower index of pos elements in array
 * @hi: is higher index of pos elements in array
 * @x: is the value to search for
 * Return: the index where value is located.
 */
int interpolation(int *a, size_t lo, size_t hi, int x)
{
	int p;

	if (lo <= hi)
	{
		p = lo + (((double)(hi - lo) / (a[hi] - a[lo])) * (x - a[lo]));
		if (p > hi)
		{
			printf("Value checked array[%d] is out of range\n", p);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", p, a[p]);
		if (a[p] == x)
			return (p);
		if (a[p] < x)
			return (interpolation(a, p + 1, hi, x));
		if (a[p] > x)
			return (interpolation(a, lo, p - 1, x));
	}
	return (-1);
}
/**
 * interpolation_search - searches for a value in a sorted array of integers using
 * the interpolation search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);
	index = interpolation(array, 0, size - 1, value);
	return (index);
}
