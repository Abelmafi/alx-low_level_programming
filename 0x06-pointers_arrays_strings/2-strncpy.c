#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - check the code
 * @dest: destination array
 * @src: sourse array
 * @n: intiger
 * Return: Always destination array.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
