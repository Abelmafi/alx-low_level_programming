#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - allocates memory for an array, using malloc.
 * @s: string argument.
 * @b: size of argument.
 * @n: intn
 *
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: string argument.
 * @size: size of argument.
 *
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	s = malloc(nmemb * size);
	if (s == NULL || size == 0)
		return (NULL);
	_memset(s, 0, (nmemb * size));
	return (s);
}

