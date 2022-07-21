#include "main.h"
/**
 * print_binary - print binary of number.
 * @n: an intiger to be converted to binary.
 *
 */
void print_binary(unsigned long int n)
{
	int i, k;

	if (n == 0)
		_putchar('0');
	for (k = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
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
