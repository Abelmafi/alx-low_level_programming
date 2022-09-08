#include "main.h"
/**
 * _memcpy - copies information between void pointers.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: size of the new pointer.
 *
 * Return: no return.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
