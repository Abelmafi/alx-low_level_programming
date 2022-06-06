#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	int w, x, y, z, a = '1', b = '0';

	for (x = '0'; x <= '9'; x++)
	{
		for (w = '0'; w <= '9'; w++)
		{
			for (y = b; y <= '9'; y++)
			{
				for (z = a; z <= '9'; z++)
				{
					a = '0';
					putchar (x);
					putchar (w);
					putchar (' ');
					putchar (y);
					putchar (z);
					if (x == '9' && w == '8')
					{continue;	}
					else
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
			if (w == '8')
			{a = '0';
			b = x + 1;	}
			else if (w == '9')
			{b = x + 1;
			a = '1';	}
			else
			{a = w + 2;
			b = x;	}
		}
	}
	putchar ('\n');
	return (0);
}
