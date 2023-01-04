#include <stdio.h>
#include "search_algos.h"
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
 * binary_ssearch - searches for a value in a sorted array of integers using
 * the binary search recursive algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @lo: is lower index of pos elements in array
 * @hi: is higher index of pos element in array
 * @value: is the value to search for
 * Return: the index where value is located.
 */
int binary_ssearch(int *array, int lo, int hi, int value)
{
	int mid, i;

	if (hi > lo)
	{
		mid = lo + (hi - lo) / 2;
		if (array[mid] == value)
			return (mid);
		printf("Searching in array:");
		if (array[mid] < value && array[mid])
		{
			for (i = mid + 1; i < hi; i++)
				printf(" %d,", array[i]);
			printf(" %d", array[i]);
			printf("\n");
			return (binary_ssearch(array, mid + 1, hi, value));
		}
		for (i = lo; i < mid - 1; i++)
			printf(" %d,", array[i]);
		printf(" %d", array[i]);
		printf("\n");
		return (binary_ssearch(array, lo, mid - 1, value));
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search recursive algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is higher index of pos elements in array
 * @value: is the value to search for
 * Return: the index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%ld] and ", i / 2);
	printf("[%ld]\n", min(i, size - 1));
	printf("Searching in array:");
	for (j = i / 2; j < min(i, size - 1); j++)
	{
		printf(" %d,", array[j]);
	}
	printf(" %d", array[j]);
	printf("\n");
	return (binary_ssearch(array, i / 2, min(i, size - 1), value));
}
