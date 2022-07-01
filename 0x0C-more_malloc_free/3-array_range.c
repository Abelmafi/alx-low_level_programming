#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - allocates memory for an array, using malloc.
 * @min: string argument.
 * @max: size of argument.
 *
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int *s;
	int a, j = 0, i;

	a = max - min;
	if (min > max)
		return (NULL);
	s = malloc((a + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}
