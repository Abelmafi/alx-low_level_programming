#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - check the code
 * @n: string to be changed
 * Return: void.
 */

void print_number(int n)
{
	int j, e, a, b = 0;

	a = n;
	e = n;
	while (a <= 10)
	{
		a = a / 10;
		b++;
	}

	if (n >= 10)
	{
		for (j = b; j > 0; j--)
		{
			int i = pow(10, j);
			int d = n / i;

			_putchar(d);
			n = n / 10;
		}
		_putchar(e % 10);
	}
	else
	{
		_putchar(n);
	}
}
