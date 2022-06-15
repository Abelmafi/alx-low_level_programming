#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - check the code
 * @dest: destination array
 * @src: sourse array
 * @n: intiger
 * Return: Always destination array.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
