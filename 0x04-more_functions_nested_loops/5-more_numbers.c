#include "main.h"

/**
 * more_numbers - print_numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else
				_putchar('0' + j);
		}
		printf('\n');
	}
}
