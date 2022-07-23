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

	if (size_r < a + 1 || size_r < b + 1)
		return (0);
	while (a > 0 || b > 0)
	{
		int f = (int)((a > 0) ? (n1[a - 1] - '0') : 0);
		int g = (int)((b > 0) ? (n2[b - 1] - '0') : 0);
		int n = f + g + l;
		int m = n % 10;

		if (n > 9)
		{
			r[size_r - 1] = (char)(m + '0');
			l = 1;
		}
		else
		{
			r[size_r - 1] = (char)(n + '0');
			l = 0;
		}
		size_r--;
		a--;
		b--;
	}
	if (size_r == 1 && l == 1)
		return (0);
	if (size_r > 1 && l == 1)
		r[size_r - 1] = 1 + '0';
	return (r + size_r - 1);
}
