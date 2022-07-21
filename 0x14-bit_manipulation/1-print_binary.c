#include "main.h"
/**
 * print_binary - print binary of number.
 * @n: an intiger to be converted to binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int i, k = 0;

	if (n == 0)
		_putchar('0');
	else
	{
	for (i = sizeof(n) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			k = 1;
		}
		if (k == 1)
		{
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
		}
	}
	}
}


