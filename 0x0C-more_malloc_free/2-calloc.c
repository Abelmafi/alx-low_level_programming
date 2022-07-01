#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - allocates memory for an array, using malloc.
 * @c: string argument.
 * @b: size of argument.
 * @n: intn.
 *
 * Return: return pointer
 */

char *_memset(char *c, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		c[i] = b;
	}
	return (c);
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

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	_memset(s, 0, (nmemb * size));
	return (s);
}

