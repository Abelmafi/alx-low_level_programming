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
	int i, c = 0, sum = 0;

	if (argv[1] == NULL)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			c = 1;
			break;
		}
		sum += atoi(argv[i]);
	}
	if (c == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	else 
		return (1);
}
