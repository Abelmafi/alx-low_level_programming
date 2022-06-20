#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: pointer
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
