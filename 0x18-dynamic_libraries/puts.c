#include "main.h"
/**
 * _puts - print string.
 * @s: string input.
 *
 * Return: always nothing.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
