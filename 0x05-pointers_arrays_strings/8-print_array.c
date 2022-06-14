#include "main.h"
#include <stdio.h>
/**
 * print_array - print array variable
 * @a: string
 * @n: intiger
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	i = 0;
	if (n < 0)
	{};
	else
	{
	while (i < j)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("%d", *(a + j));
	}
	printf("\n");
}
