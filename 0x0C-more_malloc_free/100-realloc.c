#include "main.h"
#include <stdlib.h>
/**
 * _memset - allocates memory for an array, using malloc.
 * @c: new array.
 * @b: old array.
 * @n: new size
 *
 * Return: return pointer
 */
char *_memset(char *c, char *b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		c[i] = b[i];
	return (c);
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
	void *s;
	unsigned int size;

	(old_size < new_size) ? (size = old_size) : (size = new_size);
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	s = malloc(new_size);
	_memset(s, ptr, size);
	return (s);
}
