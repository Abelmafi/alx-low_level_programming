#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - calculate the diagonal sum of squire matrix.
 * @a: squire matrix array.
 * @size: matrix size
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, k = 0;
	long int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		i++;
	}
	while (j >= 0)
	{
		sum2 += a[k * size + j];
		k++;
		j--;
	}
	printf("%ld, %ld\n", sum1, sum2);
}

