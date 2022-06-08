#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, c = 0;

	for (i = 1; i < 1024; i++)
	{
		int a = i % 3;
		int b = i % 5;

		if (a == 0 || b == 0)
		{
			c = c + i;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", c);
	return (0);
}
