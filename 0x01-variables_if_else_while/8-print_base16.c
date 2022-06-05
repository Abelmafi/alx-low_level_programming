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


	for (x = '0'; x <= '9'; x++)
	{
		putchar (x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}
	putchar (' ');
	return (0);
}
