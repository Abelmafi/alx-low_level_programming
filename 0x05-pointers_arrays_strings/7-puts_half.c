#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - print half char
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = len / 2 + 1; i < len; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
