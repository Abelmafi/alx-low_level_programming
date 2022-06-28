#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, i, j, b;

	if (ac == 0)
		return (NULL);

	for (a = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			a++;
		a++;
	}

	s = malloc((a + 1) * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = j = b = 0; b < a; j++, b++)
	{
		if (av[i][j] == '\0')
		{
			s[b] = '\n';
			i++;
			b++;
			j = 0;
		}
		if (b < a - 1)
			s[b] = av[i][j];
	}
	s[b] = '\0';

	return (s);
}

