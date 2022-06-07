#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet
 *
 * Return: nething
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		a++;
		_putchar('\n');
	}
}

