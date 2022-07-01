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
	char *s;
	unsigned int i = 0;

	s = malloc(nmemb * size + 1);
	if (s == NULL || nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb)
	{
		s[i] = 0;
		i++;
	}
	s[i] = '\0';
	return (s);
}

