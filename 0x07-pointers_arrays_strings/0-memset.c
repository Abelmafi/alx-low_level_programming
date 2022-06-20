#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @b: the address of memory to print
 * @n: the size of the memory to print
 * @s: pointer
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
