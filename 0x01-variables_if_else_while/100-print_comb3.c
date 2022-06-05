#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 */
int main(void)
{
	int x, y;


	for (x = '0'; x < '9'; x++)
	{
		int z = x + 1;

		for (y = z; y <= '9'; y++)
		{
			putchar (x);
			putchar (y);
			if (x == '8')
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
	return (0);
}
