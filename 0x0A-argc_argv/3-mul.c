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
	int j;

	(void) argc;
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", j);
	}
	return (0);
}
