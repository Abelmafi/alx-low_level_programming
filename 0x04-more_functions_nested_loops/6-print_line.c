#include "main.h"

/**
 * print_line - print line
 *
 * @n: intiger
 * Return: Always 0.
 */
void print_line(int n)
{
	int j;

	if (n == 0 || n < 0)
	{}
	else
	{
	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
