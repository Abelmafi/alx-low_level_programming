#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - print array variable
 * @dest: string
 * @src: intiger
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
