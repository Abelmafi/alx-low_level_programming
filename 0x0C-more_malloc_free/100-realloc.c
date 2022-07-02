#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _memset - allocates memory for an array, using malloc.
 * @c: new array.
 * @b: old array.
 * @n: new size
 *
 * Return: return pointer
 */
char *_memset(char *b, char *c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		b[i] = c[i];
	}
	return (b);
}

/**
 * _realloc - allocates memory for an array.
 * @ptr: array.
 * @old_size: old size.
 * @new_size: new size.
 *
 * Return: return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int size, i;

	(old_size < new_size) ? (size = old_size) : (size = new_size);
	printf("%d\n", size);
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	s = malloc(new_size);
	_memset(s, ptr, size);
	free(ptr);
	return (s);
}
