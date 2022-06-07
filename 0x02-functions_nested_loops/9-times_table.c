#include <stdio.h>
#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, a, c, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			d = i * j;
			a = d % 10;
			c = d / 10;
			if (d < 10)
			{
				_putchar(' ');
				_putchar('0' + d);
				if (j == 9)
				{
					continue;
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + c);
				_putchar('0' + a);
				if (j ==   9)
				{
					continue;
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
		_putchar ('\n');
	}
}

