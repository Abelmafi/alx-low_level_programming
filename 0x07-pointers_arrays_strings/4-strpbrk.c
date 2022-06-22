#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - prints buffer
 * @accept: char to be scaned
 * @s: pointer to scan
 * Return: int.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s - 1) == *(accept + j))
			{
				return (s - 1);
			}
		}
	}
	return (NULL);
}
