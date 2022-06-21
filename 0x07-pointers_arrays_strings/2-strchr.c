#include <stdio.h>
#include "main.h"

/**
 * _strchr - prints buffer
 * @c: char to be printed
 * @s: pointer
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (*s)
	{
		if (*s == c)
		{
			j = 1;
			break;
		}
		i++;
		*s++;
	}
	if (j == 1)
		return (s + i);
	else
		return ('\0');
}
