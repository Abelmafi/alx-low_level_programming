#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - changes binary number system to desimal
 * @b: binary string.
 *
 * Return: unsigned intiger.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j, n = 1, k, l = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		i++;
	}
	i--;
	for ( ; i >= 0; i--)
	{
		k = b[i] - '0';
		if (k != 0 && k != 1)
			return (0);
		if (k == 1)
		{
			for (j = 0; j < l; j++)
			{
				n *= 2;
			}
			sum += k * n;
			n = 1;
		}
		l++;
	}
	return (sum);
}

