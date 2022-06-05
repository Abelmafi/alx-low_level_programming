#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x < '8'; x++)
	{
		int a = x + 1;

		for (y = a; y < '9'; y++)
		{
			int b = y + 1;

			for (z = b; z <= '9'; z++)
			{
				putchar (x);
				putchar (y);
				putchar (z);
				if (x == '7')
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
