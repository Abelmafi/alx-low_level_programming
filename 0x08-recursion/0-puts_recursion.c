#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - print string
 * @s: the string to print
 * return: none
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

