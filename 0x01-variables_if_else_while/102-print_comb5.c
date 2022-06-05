#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	int w, x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (w = '0'; w < '9'; w++)
		{
			for (y = x; y <= '9'; y++)
			{
				int a = w + 1;

				for (z = a; z <= '9'; z++)
				{
					putchar (x);
					putchar (w);
					putchar (' ');
					putchar (y);
					putchar (z);
					if (w == '8')
					{
						continue;
					}
					else
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
