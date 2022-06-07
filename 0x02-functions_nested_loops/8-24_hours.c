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

	for (i = 0; i <= 2; i++)
	{ 
		if (d = 0)
		{
		for (j = 0; j <= 9; j++)
		{
			if (d = 0)
			{
			for (k = 0; k <= 5; k++)
			{
				if (d = 0)
				{
				for (l = 0; l <= 9; l++)
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
				else
				{break;	}
			}
			}
			else
			{break;	}
		}
		}
		else
		{break;	}
	}
}
