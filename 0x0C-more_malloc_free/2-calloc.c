#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i = 0;

	s = malloc(nmemb * size);
	if (s == NULL || nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

