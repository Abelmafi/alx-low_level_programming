#include "main.h"
/**
 * _memset - copies information between void pointers.
 * @s: destination pointer.
 * @b: source char.
 * @n: index.
 *
 * Return: new pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	s[n] = b;
	return (s);
}
