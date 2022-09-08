#include "main.h"
/**
 * _strlen - calculate string length.
 * @s: string input.
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
	char *e = s;

	while (*e)
		e++;
	return (e - s);
}

