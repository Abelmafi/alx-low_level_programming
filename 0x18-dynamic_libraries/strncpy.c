#include "main.h"
/**
 * _strncpy - copy sourse string to destination string.
 * @dest: destination string.
 * @src: sourse string.
 * @n: number of string to be aadded.
 * Return: destination pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int counter = 0;

	if (dest == NULL)
		return (NULL);
	while (*src != '\0' && counter <= n)
	{
		*dest = *src;
		counter++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

