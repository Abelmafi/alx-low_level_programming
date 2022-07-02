#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	char *s, *c;
	unsigned int size, i;

	(old_size < new_size) ? (size = old_size) : (size = new_size);
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
	c = ptr;
	for (i = 0; i < size; i++)
	{
		s[i] = c[i];
	}
	free(ptr);
	return (s);
}
