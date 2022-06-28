#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create copy of an array
 * @str: aray to copy
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		str++;
		i++;
	}
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
