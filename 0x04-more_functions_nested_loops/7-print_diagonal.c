#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: intiger
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j, i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
	for (j = 1; j <= n; j++)
	{
		if (j == 1)
		{}
		else
		{
		for (i = 0; i < j - 1; i++)
		{
			_putchar(' ');
		}
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
