#include "main.h"
/**
 * _strcpy - copy sourse string to destination string.
 * @dest: destination string.
 * @src: sourse string.
 * Return: destination pointer.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	if (dest == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

