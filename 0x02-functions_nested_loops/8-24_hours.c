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
	bool stop = false;

	for (i = 0; (i <= 2) && !stop; i++)
	{
		for (j = 0; (j <= 9)&& !stop; j++)
		{
			for (k = 0; (k <= 5) && !stop; k++)
			{
				for (l = 0; (l <= 9) && !stop; l++)
				{
					if (i == 2 && j == 4)
					{
						stop = true;
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
