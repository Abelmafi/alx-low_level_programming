#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int i, j, k, l;
	int b = 0;

	for (i = 0; i <= 2; i++)
	{
		if (b == 1)
		{
			break;
		}
		else
		{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j == 4)
			{
				b = 1;
				break;
			}
			else
			{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
			}
		}
		}
	}
}
