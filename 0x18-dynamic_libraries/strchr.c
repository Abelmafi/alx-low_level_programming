#include "main.h"
/**
 * _strchr - search character inside string.
 *
 * @s: input string.
 * @c: character to be searched.
 * Return: char piinter and NULL on failure.
 */
char *_strchr(char *s, char c)
{
	char *isCharFind = NULL;

	if (s != NULL)
	{
		do {
			if (*s == c)
			{
				isCharFind = s;
				break;
			}
		} while (*s++);
	}
	return (isCharFind);
}

