#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	int w, x, y, z, a = '1';

	for (x = '0'; x <= '9'; x++)
	{
		for (w = '0'; w <= '9'; w++)
		{
			for (y = x; y <= '9'; y++)
			{
				for (z = a; z <= '9'; z++)
				{
					a = '0';
					if (y == '0' && z == '0')
					{continue;	}
					else
					{
					putchar (x);
					putchar (w);
					putchar (' ');
					putchar (y);
					putchar (z);
					if (w == '8')
					{continue;	}
					else
					{
						putchar (',');
						putchar (' '); }
					}
				}
			}
			a = w + 2;
		}
	}
	putchar ('\n');
	return (0);
}
