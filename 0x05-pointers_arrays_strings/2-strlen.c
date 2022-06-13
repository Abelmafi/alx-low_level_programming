#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - check string length
 *
 * @s: char type
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
