#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of argument
 * @argv: argument variable
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int c = atoi(argv[1]);

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (c < 0)
		printf("0\n");
	while (c != 0)
	{
	if (c >= 25)
	{
		sum = sum + (c / 25);
		c = c % 25;
	}
	if (c >= 10 && c < 25)
	{
		sum = sum + (c / 10);
		c = c % 10;
	}
	if (c >= 5 && c < 10)
	{
		sum = sum + (c / 5);
		c = c % 5;
	}
	if (c >= 2 && c < 5)
	{
		sum = sum + (c / 2);
		c = c % 2;
	}
	if (c == 1)
	{
		c = 0;
		sum = sum + 1;
	}
	}
	printf("%d\n", sum);
	return (0);
}
