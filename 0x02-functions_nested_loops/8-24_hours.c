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
	int d = 0;;

	for (i = 0; i <= 2 && d = 0; i++)
	{
		for (j = 0; j <= 9 && d = 0; j++)
		{
			for (k = 0; k <= 5 && d = 0; k++)
			{
				for (l = 0; l <= 9 && d = 0; l++)
				{
					if (i == 2 && j == 4)
					{
						d = 1;
					}
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
