#include <stdio.h>
#include "main.h"

/**
 * _strspn - prints buffer
 * @accept: char to be scaned
 * @s: pointer to scan
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, a = 0, b = 0;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				b++;
				a = 1;
			}
		}
		if (a != 1)
			break;
		a = 0;
		*s++;
	}
	return (b);
}
