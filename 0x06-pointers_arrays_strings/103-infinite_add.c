#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - add two string of numbers
 * @n1: frist number string
 * @n2: second number string
 * @r: result buffer
 * @size_r: result buffer size
 * Return: char.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l = 0;
	int a = strlen(n1);
	int b = strlen(n2);
	int size;

	size = ((a >= b) ? (a + 1) : (b + 1));
	if (!*n1 && !*n2)
	{
		return (0);
	}
	if ((a + 2) > size_r || (b + 2) > size_r)
	{
		return (0);
	}
	else
	{
		while (a > 0 || b > 0)
		{
			int f = (int)((a > 0) ? (n1[a - 1] - '0') : 0);
			int g = (int)((b > 0) ? (n2[b - 1] - '0') : 0);
			int n = f + g + l;
			int m = n % 10;

			if (n > 9)
			{
				r[size - 1] = (char)(m + '0');
				l = 1;
			}
			else
			{	r[size - 1] = (char)(n + '0');
				l = 0;
			}
			size--;
			a--;
			b--;
		}
		if (l == 1)
			r[0] = 1 + '0';
	}
	return (r);
}
