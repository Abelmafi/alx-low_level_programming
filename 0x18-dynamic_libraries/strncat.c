#include "main.h"
/**
 * _strncat - cat sourse string to destination string.
 *
 * @dest: destination string.
 * @src: sourse string.
 * @n: number of string to be aadded.
 * Return: destination pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, z;

	i = _strlen(dest);
	j = _strlen(src);
	for (z = 0; z < j; z++)
		dest[z + i] = src[z];
	dest[i + j] = '\0';
	return (dest);
}

