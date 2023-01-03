#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the binary search recursive algorithm.
 * @ans: index value.
 * @array: is a pointer to the first element of the array to search in
 * @lo: is lower index of pos elements in array
 * @hi: is higher index of pos elements in array
 * @v: is the value to search for
 * Return: the index where value is located.
 */
int binary_ssearch(int *array, int ans, int lo, int hi, int v)
{
	int mid, mid_r, mid_l, i;

	if (hi >= lo)
	{
		mid = lo + (hi - lo) / 2;
		if (mid % 2 == 0)
		{
			mid_l = mid + 1;
			mid_r = mid;
		}
		else
		{
			mid_l = mid;
			mid_r = mid;
		}
		printf("Searching in array:");
		for (i = lo; i < hi; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);
		if (array[mid] < v)
			return (binary_ssearch(array, ans, mid_r + 1, hi, v));
		if (array[mid] > v)
			return (binary_ssearch(array, ans, lo, mid_l - 1, v));
		if (array[mid] == v)
		{
			ans = mid;
			return (binary_ssearch(array, ans, lo, mid_l - 1, v));
		}
	}
	return (ans);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the binary search recursive algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is higher index of pos elements in array.
 * @value: is the value to search for.
 * Return: the index where value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);
	index = binary_ssearch(array, -1, 0, size - 1, value);
	return (index);
}
