#include "main.h"
/**
 * print_binary - print binary of number.
 * @n: an intiger to be converted to binary.
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	int k = 0, size;

	size = sizeof(n) * 8 - 1;
	if (n == 0)
		_putchar('0');
	for (i = 1 << size; i > 0; i *= 0.5)
	{
		if (n & i)
		{
			k = 1;
		}
		if (k == 1)
		{
			(n & i) ? _putchar('1') : _putchar('0');
		}
	}
}
