#include <stdio.h>
#include "main.h"

/**
 * print_times_table - check the code.
 *
 * @n: intiger
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, a;

	if (n > 15 || n < 0)
	{
		printf("");
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			a = i * j;

			if (j == 0)
			{
				printf("%d", a);
			}
			else
			{
			if (a < 10)
			{
				printf(",   %d", a);
			}
			else if (a >= 10 && a < 100)
			{
				printf(",  %d", a);
			}
			else
			{
				printf(", %d", a);
			}
			}
		}
		printf("\n");
	}
	}
}
