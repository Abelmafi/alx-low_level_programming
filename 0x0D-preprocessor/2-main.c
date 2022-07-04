#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *a;

	a = __FILE__;
	while (*a)
	{
		putchar (*a);
		a++;
	}
	putchar ('\n');
	return (0);
}
