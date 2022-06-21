#include <stdio.h>

/**
 * _strchr - prints buffer
 * @c: char to be printed
 * @s: pointer
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s != NULL)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
